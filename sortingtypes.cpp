#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			//int temp=arr[j];
			//arr[j]=arr[j+1];
			swap(arr[j],arr[j+1]);
		}
	}
}
void insertionsort(int arr[],int n)
{
	int j;
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		swap(arr[i],arr[min]);
	}
}
int main()
{
	int i;
	int vec[]={23,54,56,2,1};
	int n=sizeof(vec)/sizeof(vec[0]);
	selectionsort(vec,n);
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	{
		cout<<vec[i]<<" ";
		
	}
	return 0;

}
