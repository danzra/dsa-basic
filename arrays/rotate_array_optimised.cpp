#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(int arr[] , int n , int d)
{
	reverse(arr,arr+n);
	
}
int main()
{
	int n , arr[40];
	cin>>n;
	for(int i =0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	vector <int> count = rotate(arr,n,1);
	for(auto it : count)
	{
		cout<<it<<endl;
	}
}