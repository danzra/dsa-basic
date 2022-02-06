#include<bits/stdc++.h>
using namespace std;

string remove(string str,  char c)
{
	int len = str.length();
	string str2="";
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]!=c)
		{
			str2=str2+str[i];
		}

	}
	return str2;
}



int main()
{
	string str="lovee";
	char c;
	cin>>c;
	
	cout<<remove(str,c)<<endl;

}