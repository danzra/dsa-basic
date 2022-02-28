#include<bits/stdc++.h>
using namespace std;

void reverse_stack(stack <int>&s1 , stack<int>&s2)
{
	if(s1.size()== 0 || s1.size()==1)
	{
		return;
	}

	int temp = s1.top();
	s1.pop();

	reverse_stack(s1 , s2);
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	s1.push(temp);

	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}
int main()
{
	stack<int> s1 , s2;
	for(int i =1; i<6;i++)
	{
		s1.push(i);
	}
	reverse_stack(s1 , s2);

	while(!s1.empty())
	{
		cout<<s1.top()<<endl;
		s1.pop();

	}

}