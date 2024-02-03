#include<iostream>
using namespace std;
int main()
{
	int i,arr[10],num,first=0,last=9,middle;
	cout<<"Enter the array elements in ascending order:";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nenter the element to be searched:";
	cin>>num;
	while(first<=last)
	{
		middle=(first+last)/2;
		if(arr[middle]==num)
		{
			cout<<"\n The number is found at"<<middle<<"index";
			break;
		}
		else if(arr[middle]>num)
		first=middle+1;
		else
		last=middle-1;
	}
	return 0;
}
