#include<bits/stdc++.h>
using namespace std;

int multiplication( int m , int n)
{
	if(n==0 || m==0)
		{
			return 0;
		}

		int output = multiplication(m,n-1);
		return m + output;
}

int main()
{
		cout<<multiplication(7,5);
}