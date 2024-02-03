#include<iostream>
#define MAX 1000
using namespace std;
struct stack
{
	int *arr;
	int top,cap;
	stack(int x)
	{
		cap=x;
		top=-1;
		arr=new int[MAX];
	}
	void push(int a)
	{
		if(top==cap-1)
		{
			cout<<"Stack is full";
			return;
		}
		else{
			++top;
			arr[top]=a;
			cout<<"Element "<<a<<" pushed into the stack";
		}
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty";
			return INT_MIN;
		}
		int temp=arr[top];
		top--;
		return temp;
		
	}
	void display()
	{
		for(int i=0;i<=top;i++)
		{
			cout<<endl<<arr[i]<<endl;
		}
	}
};
int main()
{
	stack s(MAX);
	s.push(10);
	s.push(30);
	s.push(60);
	s.display();
}
