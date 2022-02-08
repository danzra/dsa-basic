#include<bits/stdc++.h>
using namespace std;

bool palindrome( string &s , int first , int last)
{
	if(first == last)
		{
			return true;
		}

		if(first>last)
		{
			return true;
		}
		if(s[first]!=s[last])
		{
			return false;
		}
		palindrome(s,first+1,last-1);


}
int main()
{
	string s="malayalam";

	cout<<palindrome(s,0,s.length()-1);
}