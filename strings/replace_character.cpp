#include<bits/stdc++.h>
using namespace std;

void replace(char arr[] , char c1 ,char c2)
{
	for(int i=0; arr[i]!='\0';i++)
	{
		if(arr[i]==c1)
		{
			arr[i]=c2;
		}
	}

}

int main()
{
	char arr[10],c1,c2;
	cin>>arr;
	cin>>c1;
	cin>>c2;

	replace(arr,c1,c2);
	cout<<arr;

}