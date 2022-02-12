#include<bits/stdc++.h>
using namespace std;

int integer(string str , int last)
{
	if(last==0)
	{
		return str[last] - '0';
	}
	
	int output= integer(str , last - 1);
	int count = str[last] - '0';

	return output*10 + count;
}

int main()
{
	string str = "1234";

	cout << integer(str,str.size()-1);
}