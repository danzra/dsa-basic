#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n)
{
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		int min=arr[i],minIndex=i;
	//find the minimum element
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<min)
		{
			min=arr[j];
			minIndex=j;

		}

	}

	//swap the element
	int temp=arr[i];
	arr[i]=arr[minIndex];
	arr[minIndex]=temp;
}
}
int main()
{
	int i,n;
	int arr[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}