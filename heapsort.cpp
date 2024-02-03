#include<iostream>
#include<algorithm>
using namespace std;
/*void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=a;
}*/
void heapify(int arr[],int size,int i)
{
	int largest=i;
	int leftchild=2*i+1;
	int rightchild=2*i+2;
	if(leftchild<size&&arr[leftchild]>arr[largest])
	largest=leftchild;
	if(rightchild<size&&arr[rightchild]>arr[largest])
	largest=rightchild;
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,size,largest);
	}
}
void heapsort(int arr[],int size)
{
	for(int i=size/2-1;i>=0;i++)
	heapify(arr,size,i);
}
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int arr[]={3,5,9,6,8,20,10,12,18,9};
	int size=10;
	heapsort(arr,size);
	display(arr,size);
}
