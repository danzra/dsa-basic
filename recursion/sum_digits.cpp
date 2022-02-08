#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	if(n==1)
	{
		return n;
	}

	int output= n%10 +sum(n/10);
	return output;
}

int main()
{
	cout<<sum(12345);
}