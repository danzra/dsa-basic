#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[] , int n , int target)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==target)
		{
			return i;

		}
		
	}
	return -1;
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
	
	cout<<linear_search(arr,n,5)<<endl;
	
	
}