#include<bits/stdc++.h>
using namespace std;

int zeroes(int n)
{
	if(n==0)
	{
		return 0;
	}
	int digit = zeroes(n/10);

	if(n%10==0)
	{
		return 1+digit;
	}
	else
	{
		return digit;
	}
}

int main()
{
	cout<<zeroes(10024); 
}