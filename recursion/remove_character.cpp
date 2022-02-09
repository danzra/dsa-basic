#include<bits/stdc++.h>
using namespace std;

string duplicate( string str , int first , char x)
{
	if(str[first]=='\0')
	{
		return "";
	}

	

	if(str[first] == x)
	{
		 return duplicate(str,first + 1, x);
		 //or we can write str.substr(1)
	}
	else{
	return str[first] + duplicate(str,first + 1, x);
	//or we can write str.substr(1)
}
}

int main()
{
	string str="abcadaa";
	

	str = duplicate(str,0,'a');
	cout<<str;
}