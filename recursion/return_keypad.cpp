#include<bits/stdc++.h>
using namespace std;

string key( char c)
{
	if(c=='2')
	{
		return "abc";
	}
	else if(c=='3')
	{
		return "def";
	}
	else if(c=='4')
	{
		return "ghi";
	}
	else
	return "";
}

int keypad( string str , string str2[])
{
	if(str.size()==0)
	{
		str2[0]="";
		return 1;
	}
	int output = keypad(str.substr(1),str2);
	string firstdigit = key(str[0]);
	string temp[1000];
	int k =0;

	for(int i =0;i<output;i++)
	{
		for(int j=0;j<firstdigit.size();j++)
		{
			temp[k]= firstdigit[j]+str2[i]  ;
			k++;
		}
	}
	for(int i =0;i<k;i++)
	{
		str2[i]=temp[i];
	}

	return firstdigit.size()*output;

}

int main()
{
	string str2[1000];
	int count = keypad("234",str2);

	for(int i =0;i<count;i++)
	{
		cout<<str2[i]<<endl;
	}
}