#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[] , int n)
{
	int i=0, j=n-1;
     int temp;

	while(i<j)
	{
		arr[i]=arr[i]^arr[j];
		arr[j]=arr[i]^arr[j];
		arr[i]=arr[i]^arr[j];
         
		i++;
		j--;
	}

}

int main()
{
	int n,i,arr[10];

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
int t;
cin>>t;

	reverse(arr,n);

	

for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}


}