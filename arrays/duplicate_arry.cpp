#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, arr[10],i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	/*for(i=0;i<n;i++)

	{
		//int count=-1;
		for(j=0;j<n;j++)
		{
			
			if(arr[i]==arr[j] && (i!=j))
			{
				cout<<arr[j]<<endl;


			}
		}
		//if(count>-1)
			//cout<<arr[i]<<endl;
	}*/

    for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<"\n"<<arr[i];
    }
   }
}
}