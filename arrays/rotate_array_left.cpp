#include<bits/stdc++.h>
using namespace std;

void rotate_array(int arr[] , int n)
{
	int i=0,k,end=n-1;
	int temp=arr[0];
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1];

	}
	arr[end]=temp;
}


int main()
{
	int i,n;
	int arr[10];
	cin>>n;
	int t;
	cin>>t;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//below while loop is for number of times we want the array to rotate
	while(t--)
	{
	rotate_array(arr,n);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}