#include<bits/stdc++.h>
using namespace std;

void hanoi( int n , char s , char a , char d)
{
	if(n==0)
	{
		return;
	}

	hanoi(n-1,s,d,a);
	cout<<"move"<<n<<"from"<<s<<"to"<<d<<endl;

	hanoi(n-1, a,s,d);
}

int main()
{
	int n=2;
	hanoi(n,'A','B','C');
}