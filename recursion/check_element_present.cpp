#include<bits/stdc++.h>
using namespace std;

bool search( int arr[] , int n , int x)
{
	if(n==0)
	{
		return false;
	}
	if(arr[0]==x)
	{
		return true;
	}
	int output= search(arr+1,n-1,x);
	
}

int main()
{
	int n,i,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<search(arr,n,10);
}