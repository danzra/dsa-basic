#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n , int x)
{
	if(n==0)
	{
		return -1;
	}
	if(arr[0]==x)
	{
		return 0;
	}
	int output = first(arr+1,n-1,x);
	if(output==-1)
	{
		return -1;
	}
	return 1+output;
}



int main()
{
	int n,i,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<first(arr,n,5);
}