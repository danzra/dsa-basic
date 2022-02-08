#include<bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
	if(n==0 )
	{
		return 1;
	}
	int assume= power(x,(n-1));
	int output = x*assume; 
	return output;


}

int main()
{
	cout<<power(3,4)<<endl;

}