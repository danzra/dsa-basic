#include<bits/stdc++.h>
using namespace std;

int digit(int n)
{
	if(n<10)
	{
		return 1;
	}
	int assume=digit(n/10);
	int output = 1+ assume;
	return output;
}
int main()
{
	cout<<digit(223);
}