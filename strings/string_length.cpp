#include<bits/stdc++.h>
using namespace std;

int stringLength(char arr[])
{
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;

	}
	return count;

}


int main()
{
	char arr[10];
	cin>>arr;

	
	cout<<stringLength(arr)<<endl;

}