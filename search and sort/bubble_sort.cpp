#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] =temp;
			}
		}
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
	
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}
