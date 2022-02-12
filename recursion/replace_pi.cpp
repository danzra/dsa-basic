#include<bits/stdc++.h>
using namespace std;

string pi(string str )
{
	if(str.size()==0)
	{
		return "";
	}
	if(str[0]=='p' && str[1]=='i')
	{
		string output = pi(str.substr(2)); 
		return "3.14" + output;
	}
	else
	{
		return str[0] + pi(str.substr(1));
	}
	
	

}

int main()
{
	string str = "pipi";

	str = pi(str);

	cout<<str;
}