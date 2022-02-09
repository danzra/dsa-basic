#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int first, int last)
{
	int star=arr[first];
	int count = 0;

	for(int i=first+1;i<=last;i++)
	{
		if(arr[i]<=star)
		{
			count++;
		}
	}
	int starIn = first+count;

	swap(arr[starIn],arr[first]);

	int i=first , j=last;

	while(i<starIn && j>starIn)
	{
		if(arr[i]<=star)
		{
			i++;
		}

		else if(arr[j]>star)
		{
			j--;
		}
		else
		{
			swap(arr[i],arr[j]);
		}
	}
	return starIn;
}



void quickSort(int arr[] , int first , int last)
{
	if(first>=last)
	{
		return;
	}
	int pos= partition(arr,first,last);

	quickSort(arr,first,pos-1);
	quickSort(arr,pos+1,last);

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
	quickSort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}