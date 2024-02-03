#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
void printlist(Node *head)
{
	if(head==NULL)return;
	Node *p=head;
	do{
		cout<<p->data<<" ";
		p=p->next;
	}
	while(p!=head);
	cout<<endl;
}
Node *deleteHead(Node *head)
{
	if(head==NULL)
	return NULL;
	if(head->next==head)
	{
		delete(head);
		return NULL;
	}
	Node *curr=head;
	while(curr->next!=head)
	curr=curr->next;
	curr->next=head->next;
	delete head;
	return(curr->next);
}
Node* deleteKth(Node *head,int k)
{
	if(head==NULL)return head;
	if(k==1)
	 return deleteHead(head);
	Node *curr=head;
	for(int i=0;i<k-2;i++)
	curr=curr->next;
	Node *temp=curr->next;
	curr->next=curr->next->next;
	delete temp;
	return head;
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
	printlist(head);
	deleteKth(head,3);
	printlist(head);
	return 0;
}
