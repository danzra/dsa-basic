#include<bits/stdc++.h>
using namespace std;
int subsequence( string str , string str2[])
{
	if(str.length()==0)
	{
		str2[0]="";
		return 1;
	}

	int output = subsequence(str.substr(1) , str2);

	for(int i=0; i<output;i++)
	{
		str2[i + output]= str[0] + str2[i];
	}
	return output;

}

int main()
{

	string str = "abc";
	string* str2 = new string[1000];

	int count = subsequence(str,str2);

	for(int i=0;i< count;i++)
	{
		cout<<str2[i]<<endl;
	}
}
