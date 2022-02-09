#include<bits/stdc++.h>
using namespace std;

string duplicates(string str , int first )
{
	if(str[first]=='\0')
	{
		return "";
	}

	if(str[first]==str[first+1])
	{
		return  duplicates(str,first+1);
	}
	return str[first] + duplicates(str,first+1);
	//duplicates(str,first);

	
}

int main()
{
	string str = "aabccdd";

	str = duplicates(str,0);
	cout<<str;
}