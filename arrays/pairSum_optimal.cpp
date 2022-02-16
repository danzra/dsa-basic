#include<bits/stdc++.h>
using namespace std;
void print(vector <int> &v)
{
	for(int i =0 ; i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
//USING HASHMAP
/*
int sum(vector <int> &arr , int target)
{
	unordered_map <int,int> mpp;
	vector <int> ans;

	for(int i=0;i<arr.size();i++)
	{
		if(mpp.find(target - arr[i])!= mpp.end())
		{
			ans.push_back(mpp[target-arr[i]]);
			ans.push_back(i);
			for(auto it : ans)
			{
				cout<<it<<endl;
			}
		}
		else
		{
			mpp[arr[i]]=i;
		}
	}
}
*/
//TWO-SUM::FIND PAIRS(DOESN'T REQUIRE TO BE UNIQUE)
//USING VECTOR OF VECTORS/ TWO POINTERS ALGORITHM

int  sum(vector <int> &arr , int target)
{
	
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	//vector<vector<int>>:: iterator it;

	//for(int i =0 ;i <arr.size();i++)
	//{
		int start = 0;
		int end = arr.size() - 1;

		while(start<end)
		{
			if(arr[start] + arr[end] == target)
			{
				vector <int> temp;
				temp.push_back(arr[start]);
				temp.push_back(arr[end]);
				ans.push_back(temp);
				while(start<end && arr[start]==arr[start]+1)
				{
					start++;
				}
				while(start<end && arr[end]== arr[end-1])
				{
					end--;
				}
				start++;
				end--;
			}
			else if( arr[start] + arr[end] > target)
			{
				end--;  
			}
			else if(arr[start] + arr[end] <target)
			{
				start++;
			}
		}
	//}
	for(int i =0 ; i<ans.size();i++)
	{
		for(int j =0; j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

	
}

/*
int  sum(vector <int> &arr , int target)
{
	
	sort(arr.begin(),arr.end());
	vector <pair<int,int>> v;

	for(int i =0;i<arr.size();i++)
	{
		v.push_back({arr[i],i});
	}

	//for(int i =0 ;i <arr.size();i++)
	//{
		int start = 0;
		int end = arr.size() - 1;
		int id1=0;
		int id2=0;

		while(start<end)
		{
			if(v[start].first + v[end].first == target)
			{
				id1 = v[start].first; 
				id2 = v[end].first;
				
				
				//while(start<end && arr[start].first==arr[start].first+1)
				//{
					//start++;
				//}
				//while(start<end && arr[end].first== arr[end].first - 1 )
				//{
				//	end--;
				//}
				start++;
				end--;
			}
			else if( v[start].first + v[end].first > target)
			{
				end--;  
			}
			else if(v[start].first + v[end].first <target)
			{
				start++;
			}
		}
	//}
	cout<<id1<<" "<<id2<<endl;

	
}
*/


int main()
{
	vector <int> arr = {-7,7,6,-6,5
		,3};
	sum(arr,0);
}