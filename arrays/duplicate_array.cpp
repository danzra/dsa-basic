#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE METHOD;
/*
void duplicate(int arr[] , int n )
{
	
	for(int i =0;i<n ;i++)
	{
		for(int j = i+1;j<n;)
		{
			if(arr[i]==arr[j])
			{
				for(int k =j ; k<n; k++)
				{
					arr[k] = arr[k+1];
				}
				n--;
			}
			else
				j++;
		}
	}

	for(int i =0 ; i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
*/
//USING SET
/*
int duplicate( vector <int> &arr)
{
	set <int> s;
	//vector<int>ans;
	set <int>::iterator it; 

	for(int i =0; i<arr.size() ;i++)
	{
		if(s.find(arr[i])==s.end())
		{
			s.insert(arr[i]);
		}	//ans.push_back(arr[i]);
	}
	for(it = s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}
}
*/
//USING SORTING

int duplicate( vector <int> arr)
{
	sort(arr.begin(),arr.end());
	vector <int> ans;
	vector <int>:: iterator it;
	

	for(int i =0 ; i<arr.size();i++)
	{
		if(arr[i]!=arr[i+1])
		{
			ans.push_back(arr[i]);
		}
	}

	for(it = ans.begin(); it!= ans.end();it++)
	{
		cout<<*it<<endl;
	}


}



int main()
{
	//int arr[20] , arr2[20];
	//int n ;

	//cin>>n;

	//for(int i =0;i<n;i++)
	//{
		//cin>>arr[i];
	//}
	vector <int> arr = {1,1,2,3,4,3,4};

	//cout<<duplicate(arr,n)<<endl;
	duplicate(arr);
	
	
}