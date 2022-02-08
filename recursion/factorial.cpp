#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	int assume = factorial(n-1);
	int output=n*assume;
	return output;
}


int main()
{
	cout<<factorial(5)<<endl;
	
	

 
}