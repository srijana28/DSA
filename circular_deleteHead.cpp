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
int main()
{
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
	printlist(head);
	head=deleteHead(head);
	printlist(head);
	return 0;
}
