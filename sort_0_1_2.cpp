#include<bits/stdc++.h>
using namespace std;

void sort_012(int arr[] , int n)
{
	int i,c1=0,c2=0,c3=0;;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			c1++;
			
		}
		else if(arr[i]==1)
		{
			c2++;
			
		}
		else if(arr[i]==2)
		{
			c3++;
			
		}
	}
	for(int i=0;i<c1;i++){

       arr[i]=0;

   }

   for(int i=c1;i<(c1+c2);i++){

       arr[i]=1;

   }

   for(int i=(c1+c2);i<n;i++){

       arr[i]=2;

   }
	 
	/*while(c1>0)
	{
		arr[i++]=0;
		c1--;
	}
	while(c2>0)
	{
		arr[i++]=1;
		c2--;
	}
	while(c3>0)
	{
		arr[i++]=2;
		c3--;
	}*/

}



int main()
{
	int i,n,k;
	int arr[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort_012(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}