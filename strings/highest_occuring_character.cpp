#include<bits/stdc++.h>
using namespace std;
//#define ASCII_SIZE 256

char highest( char str[])
{
	int len=strlen(str);
	int count[300]={0};
	int max=0;
	char result;

	for(int i=0;i<len;i++)
	{
		count[str[i]]++;
		if(max<count[str[i]])
		{
			max=count[str[i]];
			result=str[i];
		}
		return result;
}
}



int main()
{
	char str[]="aaaabbbc";
	cout<<highest(str);

}