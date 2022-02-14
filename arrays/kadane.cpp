#include<bits/stdc++.h>
using namespace std;

int kadane( int arr[] , int n)
{
	int current_sum = 0;
	int best_sum = 0;

	for(int i =0 ; i<n;i++)
	{
		current_sum = current_sum + arr[i];

		if( current_sum < 0)
		{
			current_sum = 0;
		}

		if( best_sum < current_sum)
		{
			best_sum = current_sum;
		}
	}

	return best_sum;
}

int main()
{
	int arr[20];
	int n ;

	cin>>n;

	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<kadane(arr,n);
}