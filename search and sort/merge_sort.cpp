#include<bits/stdc++.h>
using namespace std;

void merge( int arr[] , int first , int mid , int last)
{
	int i= first , j=mid + 1 , k=first;
	int res[30];
	while(i<=mid  && j<=last)
	{
		if(arr[i]<arr[j])
		{
			res[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			res[k]=arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		res[k++]=arr[i++];
	}
	while(j<=last)
	{
		res[k++]=arr[j++];
	}

	for(k=first;k<=last;k++)
	{
		arr[k]=res[k];
	}
}+++

void mergeSort(int arr[] , int first , int last)
{
	if(first>=last)
	{
		return;
	}

	int mid = (first+last)/2;
	mergeSort(arr,first,mid);
	mergeSort(arr,mid+1,last);
	merge(arr,first,mid,last);


}
int main()
{
	int n,i,arr[20];
	//int last=sizeof(arr)/sizeof(arr[0]);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

}