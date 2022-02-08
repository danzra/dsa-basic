#include<bits/stdc++.h>
using namespace std;

double sum(int k)
{
	if(k==0)
	{
		return 1;
	}

	double output = sum(k-1);
	double output2 = 1/(double)pow(2,k) + output;
	return output2;
}

int main()
{
	cout<<sum(3);
}