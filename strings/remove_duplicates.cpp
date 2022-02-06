#include<bits/stdc++.h>
using namespace std;

string remove( string str)
{


	int len=str.length();
	string str2="";
	if(len==0)
	{
		return str2;
	}
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[i+1])
		{
			//str2=str2+str[i];
			str2.push_back(str[i]);
		}
	}
	return str2;
}


int main()
{
	string str="sssbbbggg";
	cout<<remove(str)<<endl;

}