#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{
	stack<char> s;
	for(int i =0 ;i <str.size();i++)
	{
		if(str[i] == ')')
		{
			int count = 0;
			while(s.top()!='(')
			{
				s.pop();
				count++;
			}
			s.pop();
			if(count == 0 || count == 1)
			{
				return true;
			}

		}
		else
		{
			s.push(str[i]);
		}


	}
	return false;
}

int main()
{
	string str = "((a + b))";
	if(check(str))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}