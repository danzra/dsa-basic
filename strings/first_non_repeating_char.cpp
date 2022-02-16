#include<bits/stdc++.h>
using namespace std;

//USING STL
/*
char repeat( string str)
{
	unordered_map <char,int> freq;

	for(int i =0;i<str.size();i++)
	{
		freq[str[i]]++; 
	}

	for(int i =0;i< str.size();i++)
	{
		if(freq[str[i]]==1)
		{
			return str[i];
		}
	}
	return str[0];

}
*/
//USING BRUTE-FORCE

char repeat(string str)
{

	for(int i =0; i<str.size();i++)
	{
		for(int j =i+1 ;j<str.size();j++)
		{
			if(str[i] != str[j])
			{
				return str[j];
			}
		}
	}
}

int main()
{
	string str = "bcdde";

	cout<<repeat(str);
}