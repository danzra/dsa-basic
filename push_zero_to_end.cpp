#include<bits/stdc++.h>
using namespace std;

void push_zero(int arr[] , int res[] , int n )
{
	int i=0,k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[k]=arr[i];			
			k++;
		}
		
	}
	while(k<n)
	{
		arr[k++]=0;
	}

}

int main()
{
	int arr[10],res[20],i,k;

	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	push_zero(arr,res,n);

	for(k=0;k<n;k++)
		{
			cout<<arr[k]<<endl;
		}
}