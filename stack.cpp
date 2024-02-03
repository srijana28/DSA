#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);//to insert element
	cout<<s.size()<<endl;//prints size of stack
	cout<<s.top()<<endl;//prints top element
	s.pop();//delete the top element
	cout<<s.top()<<endl;
	s.push(5);
	cout<<s.top()<<endl;
	cout<<"The final stack elements:\n";
	while(s.empty()==false)//to print the stack elements
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
