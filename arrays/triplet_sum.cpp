#include<bits/stdc++.h>
using namespace std;

void triplet(int arr[], int n , int target)
{
	int i=0,j=0,k=0;
	int count=0;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==target)
				{
					//cout<<arr[i]<<arr[j]<<arr[k]<<endl;
					count++;
				}
			}
		}
	}
	cout<<count;
}

int main()
{
	int i=0,n,arr[20],target=12;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	triplet(arr,n,target);

}