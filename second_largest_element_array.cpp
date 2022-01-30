#include<bits/stdc++.h>
using namespace std;

int second_largest(int arr[]  ,int n )
{
	int i=0,j=0,max=INT_MIN,secondlargest=INT_MIN;

	for(i=1;i<n;i++)
	{
		if(arr[i]>arr[max])
		{
			max=i;
			
		}

	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[max])
		{
			if(arr[i]>arr[secondlargest])
			{
				secondlargest=i;
			}

		}
	}
	return arr[secondlargest];
	
}

int main()
{
	int i,n,j;
	int arr[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<second_largest(arr,n)<<endl;

	
	
	
}