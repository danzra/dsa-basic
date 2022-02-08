#include<bits/stdc++.h>
using namespace std;

int sum(int arr[] , int n)
{
	if(n==1)
	{
		return arr[0];
	}
	int output = sum(arr+1, n-1);

	return arr[0]+output;
}


int main()
{
	int n,i,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<sum(arr,n);
}