#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[10],i,  j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		//bool match_found= false;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				count=1;

				//match_found=true;
			}
			
		}
		//if(match_found==false)
		if(count==0)
		cout<<arr[i]<<endl;
     }
	
	//cout<<arr[0]<<endl;
	

}