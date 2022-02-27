#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = " (a +{b-c}) ";
	stack<char> s;

	for(int i =0 ; i<str.size(); i++)
	{
		if(str[i]=='{' || str[i]=='[' || str[i]=='(')
		{
			s.push(str[i]);
		}

		if(s.empty() && (str[i]=='}' || str[i]==']' || str[i]==')'))
			cout<<"not balanced"<<endl;
		

		if(str[i] == '}')
		{
			if(s.top()=='{')
			{
				s.pop();
			}
			else
				break;
		}

		if(str[i]== ')')
		{
			if(s.top()=='(')
			{
				s.pop();
			}
			else
				break;
		}

		if(str[i]==']')
		{
			if(s.top()=='[')
			{
				s.pop();
			}
			else
				break;
		}


		

	}	

	if(s.empty())
	{
		cout<<"balanced"<<endl;
	}
	else 
		cout<<"not balanced"<<endl;


}