#include<bits/stdc++.h>
using namespace std;

int main()
{

	char arr[10];
	int value=0;

	int length = strlen(arr);

	cin>>arr;
	for(int i=0;i<length;i++)
	{
		if(arr[i] != arr[length-i-1])
		{
			value=1;
			break;
		}
	}
	if(value)
	{
		cout<<"not a palindrome"<<endl;

	}
	else
		cout<<"palindrome"<<endl;
}