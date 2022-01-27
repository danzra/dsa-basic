#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[] , int n, int target)
{
	int mid,start=0,end=n-1;
	
	while(start<=end)
	{
		mid=(start+end)/2;

	if(arr[mid]==target)
	{
		return mid;
	}
	else if(target>arr[mid])
	{
		start=mid+1;
	}
	else 
		{
			end=mid-1;
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
	
	cout<<binary_search(arr,n,5)<<endl;
	
	
}