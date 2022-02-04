#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0,n,i;
	int array[20];
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>array[i];

	}

	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	cout<<sum<<endl;
}