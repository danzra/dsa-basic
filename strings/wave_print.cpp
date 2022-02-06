#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j;
	int arr[50][50];

	cin>>m;
	cin>>n;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(j=0;j<n;j++)		
	{
		if(j%2==0 || j==0)
		{
		for(i=0;i<m;i++)
		
		{

			cout<<arr[i][j]<<endl;

		}
		
	}
	else
	{
		for(i=m-1;i>=0;i--)
		{
			cout<<arr[i][j]<<endl;
		}
		

	}
	}

}
