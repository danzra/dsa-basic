#include<bits/stdc++.h>
using namespace std;

string replace(string str , int first , char c1 , char c2)
{
	if(str[first]=='\0')
	{
		return "";
	}

	if(str[first]==c1)
	{
		str[first]=c2;
	}

	
	return  str[first] + replace(str.substr(1),first,c1,c2);
	//or we can write (first + 1)
}

int main()
{
	string str = "abacdaaa";

	str = replace(str,0,'a','x');

	cout<<str;
}