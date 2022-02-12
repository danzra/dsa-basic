#include<bits/stdc++.h>
using namespace std;

void print(string str , string str2)
{
	if(str.size()==0)
	{
		cout<<str2<<endl; 
		return;
	}

	print(str.substr(1) , str2);
	print(str.substr(1) , str2 + str[0]);
}

int main()
{
	string str ="ab";
	string str2="";

	print(str,str2);
}