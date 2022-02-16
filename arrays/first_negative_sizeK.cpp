#include<bits/stdc++.h>
using namespace std;

//BRUTE-FORCE
/*
int negative(vector <int> &arr)
{
	vector <int> ans;
	for(int i =0; i<arr.size()-3 ; i++)
	{
		for (int j=i; j<i+3 ; j++)
		{
			if(arr[j]<0)
			{
				ans.push_back(arr[j]);
				break;
				 
			}
		}

	}
	for(int i =0 ; i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
} 
*/
//SLIDING WINDOW

int negative( vector <int> &arr , int k)
{
	vector <int> ans;
	int i =0 , j=0; 
	queue<int> q;

	while(j<arr.size())
	{
		if(arr[j]<0)
		{
			q.push(arr[j]);
		}
		if((j-i+1)<k)
		{
			j++;
		}
		else if((j-i+1)==k)
		{
			if(q.empty())
			{
				ans.push_back(0);
			}
			if(!q.empty() && arr[i]>0)
			{ans.push_back(q.front());
			}
			else if(!q.empty() && arr[i]<0)
			{
				ans.push_back(q.front());
				q.pop();
			}
			i++;
			j++;
			
			
		}

	}
	for(int i =0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
}


int main()
{
	int n ,i;
	vector<int> arr = {12,-1,-7,8,-15,30,16,28};

	//for(int i =0 ;i <n;i ++)
	//{
		//cin >> arr[i];
	//}
	negative(arr,3);
}	
