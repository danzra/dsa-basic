#include<bits/stdc++.h>
using namespace std;
//BRUTE-FORCE APPROACH
/*
void stock(int arr[] , int n)
{
	vector <int> ans;
	int i = n-1; int j =0;
	for(int i=n-1 ; i>=0 ;i--)
	{
		int count = 0;
		for(int j =0 ; j<=i ;j++)
		{
			if(arr[i] >= arr[j])
			{
				count++;
				
			}
			

		}
	if((arr[i]==arr[i-1]) || arr[i] < arr[i-1])
	{
		count= 1;
	}
	
	ans.push_back(count);
	//reverse(ans.begin(),ans.end());


	}

		
	
	for(int i =0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}

}
*/
void stock( int arr[] , int n)
{
	stack<int> s;
	vector<int> ans;

	s.push(0);
	ans.push_back(1);

	for(int i = 1 ; i<n; i++)
	{
		while(!s.empty() && (arr[s.top()] < arr[i]))
		{
			s.pop();  

		}

		if(s.empty())
		{
			ans.push_back(i + 1);
		}
		else
		{
			ans.push_back(i - s.top());
		}
		s.push(i);
	}
	for(int i =0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
}
int main()
{
	int arr[20];
	int n;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	stock(arr,n);
}