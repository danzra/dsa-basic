#include<bits/stdc++.h>
using namespace std;
vector <int> voters(int arr1[] , int n)
{
	vector <int> ans;
	sort(arr1,arr1+n);
	unordered_map<int,int> m ;
	for(int i =0 ; i<n ;i++)
	{
		m[arr1[i]]++;
	}
	int i =0 ;
	while(i<n)
	{
		if(m[arr1[i]]>=2)
		{
			ans.push_back(arr1[i]);
		}
		while(arr1[i]==arr1[i+1])
		{
			i++;
		}
		i++;



		
	}
	return ans;
}
int main()
{
	int n1 , n2 , n3 , arr1[30];
	cin>>n1>>n2>>n3;
	int total = n1+n2+n3;
	for(int i =0 ; i<total ; i++)
	{
		cin>>arr1[i];
	}
	vector <int> list = voters(arr1,total);

	for(auto it : list)
	{
		cout<<it<<endl;
	}
}