#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[] , int n)
{
	int current,i,j;
	for(i=1;i<n;i++)
	{
		current=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(current<arr[j])
			{
				arr[j+1]=arr[j];
			}
			else
				break;
		}
		arr[j+1] = current;
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
	
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}