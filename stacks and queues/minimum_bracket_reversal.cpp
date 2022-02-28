#include<bits/stdc++.h>
using namespace std;

void minimum( string str)
{
	stack<char> s;

	for(int i =0;i<str.size();i++)
	{
		if(str[i]=='}')
		{
			if(s.empty())
			{
				s.push(str[i]); 
			}
			else if(s.top()=='{')
			{
				s.pop();  
			}
			else
			{
				s.push(str[i]);
			}
		}
		else
			s.push(str[i]);
	}
	int count =0;
	while(!s.empty())
	{
		char c1 = s.top();
		s.pop();
		char c2 = s.top();
		s.pop();
		if(c1==c2)
		{
			count = count + 1; 
		}
		else
		{
			count = count + 2;
		}

	}
	cout<<count<<endl;

}
int main()
{
	string str = "{{{{{{}}";
	minimum(str);
}

