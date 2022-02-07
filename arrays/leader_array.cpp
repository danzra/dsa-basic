#include<bits/stdc++.h>
using namespace std;

void leader(int arr[] , int n)
{

	int i=0,max_right=arr[n-1];
	cout<<max_right<<" ";

	for(i=n-2;i>=0;i--)
	{
		if(arr[i]>max_right)
		{
			max_right=arr[i];
			cout<<max_right<<" ";
		}
	}

}

int main()
{
	int i=0,n,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	leader(arr,n);

}