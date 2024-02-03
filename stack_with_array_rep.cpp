#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
struct Mystack{
	int *arr;
	int cap;
	int top;
	Mystack(int c)
	{
		cap=c;
		arr=new int [MAX];
		top=-1;
	}
	void push(int x)
	{
		if(top==cap-1)
		{
			cout<<"Stack is full"<<endl;
			return;
		}
		top++;
		arr[top]=x;
	}
	int pop(){
		if(top==-1){
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		int res=arr[top];
		top--;
		return res;
	}
	int peek(){
		if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;
		}
		return arr[top];
		
	}
	void display(){
		if(top==-1){
			cout<<"Stack is empty"<<endl;
		
		}else
		{
			for(int i=top;i>=0;i--)
			{
				cout<<arr[i]<<" ";
			}
		}
	}
	int size()
	{
		return(top+1);
	}
	bool isEmpty(){
		return top==-1;
	}
};
int main()
{
	Mystack s(MAX);
	s.push(10);
	s.push(20);
	s.push(30);//adds an element in the stack
	cout<<"Pop gives:"<<s.pop()<<endl;//gives the top element and deletes the top
	cout<<"Size Of:"<<s.size()<<endl;//returns the size of the stack
	cout<<"Peek="<<s.peek()<<endl;//gives the top element
	cout<<"isempty:"<<s.isEmpty()<<endl;//checks if the stack is empty or not
	cout<<"Printing the stack elements from top:\n";
	s.display();
		return 0;
}
