#include<bits/stdc++.h>
using namespace std;

int print(int n)
{
	if(n==0)
	{
		return 1;
	}
	int assume=print(n-1);
	
	cout<<n<<" ";

}


int main()
{
	print(5);

}