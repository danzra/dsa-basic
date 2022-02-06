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

	int sum=0;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		
			{
				sum=sum+arr[j][i];
			}
			cout<<sum<<endl;
			sum=0;
	}
	
}