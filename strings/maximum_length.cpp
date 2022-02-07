#include<bits/stdc++.h>
using namespace std;

void minimum( string str)
{
	int len=str.length();
	int temp=0;
	int newlen=0; 
	for(int i=0;i<len;i++)
	{
		if(str[i]!=' ')
		{
			newlen++;
		}
		else
		{
			temp= min(temp,newlen);
			newlen=0;
		}
	}
	cout<<max(temp,newlen);


}



int main()
{
	string str="hello and welcome";

	minimum(str);
}