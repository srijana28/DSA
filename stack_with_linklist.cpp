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
struct Mystack{
	Node* head;
	int sz;
	Mystack(){
		head=NULL;
		sz=0;
	}
	void push(int x)
	{
		Node *temp=new Node(x);
		temp->next=head;
		head=temp;
		sz++;
	}
	int pop(){
		if(head==NULL){
			cout<<"Stack is Empty"<<endl;return INT_MAX;
		}
		int res=head->data;
		Node *temp=head;
		head=head->next;
		delete(temp);
		sz--;
		return res;
		
	}
	int peek()
	{
		if(head==NULL){cout<<"Stack is Empty"<<endl;return INT_MAX;
		}
		return head->data;
	}
	int size()
	{
		return sz;
	}
	bool isEmpty()
	{
		return sz==0;
	}
	void display()
	{
		if(head==NULL)
		cout<<"Stack is empty\n";
		else
		{
			Node* curr=head;
			while(curr!=NULL)
			{
				cout<<curr->data<<" ";
				curr=curr->next;
			}
		}
	}
};
int main()
{
	Mystack s;
	s.push(5);
	s.push(10);
	s.push(20);
	s.display();
	cout<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.isEmpty()<<endl;
	s.display();
	return 0;
}
