#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,sum=7,n;
	cin>>n;
	int arr[10];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;-j++)
			{
				if((arr[i]+arr[j])==sum)
				{
					cout<<arr[i]<<" "<<arr[j]<<endl;
				}

			}
		}
}