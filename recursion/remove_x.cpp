#include<bits/stdc++.h>
using namespace std;

string removeX( string str)
{
	if(str.size()==0)
	{
		return "";

	}

	if(str[0]=='x')
	{
		return removeX(str.substr(1));
	}
	else
	{
		return str[0] + removeX(str.substr(1));
	}
}


int main()
{
	string str ="xaxb";

	str = removeX(str);

	cout<<str;
}