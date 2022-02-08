#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[] , int n)
{
	if(n==0 || n==1)
	{
		return true;
	}

	if(arr[0]>arr[1])
	{
		return false;
	}
	int output= is_sorted(arr+1,n-1);
	return output;
}

int main()
{
	int n,i,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<is_sorted(arr,n);
}