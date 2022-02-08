#include<bits/stdc++.h>
using namespace std;

int last(int arr[] , int n , int x)
{
	if(n==0)
	{
		return -1;
	}
	if(arr[n]==x)
	{
		return n;
	}
	int output = last(arr, n-1 , x);
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
	cout<<last(arr,n,5);
}