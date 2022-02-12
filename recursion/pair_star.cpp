#include<bits/stdc++.h>
using namespace std;

string pairS(string str)
{
	if(str.size()==0)
	{
		return "";
	}

	if(str[0]==str[1])
	{
		return "**" + pairS(str.substr(2));
	}
	else
	{
		return str[0] + pairS(str.substr(1));
	}
}

int main()
{
	string str = "aaaa";

	str = pairS(str);
	cout<<str;
}