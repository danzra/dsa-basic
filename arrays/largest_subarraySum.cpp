#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
/*
int sum(int arr[] , int n)
{
	int max =0;

	for(int i =0 ; i< n-3 ;i++)
	{
		int sum =0; 
		for(int j =i ; j<i+3 ;j++)
		{
			sum = sum + arr[j];
		}
		if(sum > max)
		{
			max = sum;
		}
	}
	cout << max<<endl;
}
*/
//SLIDING WINDOW

int sum(vector<int> &arr , int k)
{
	int i =0 , j=0;
	vector <int> ans;
	int max1 = INT_MIN;
	int sum =0;
	while(j<arr.size())		
	{
		sum = sum +arr[j];
				
		if((j-i+1)<k)
		{
		
		j++;
	}
	else if((j-i+1)==k)
	{
		
		ans.push_back(sum);
		//max1 = max(max1,sum);
		sum = sum - arr[i];		
		i++;
		j++;		
	}
	}
	cout<<*max_element(ans.begin(),ans.end())<<endl;;
	//cout<<max1<<endl;

}

int main()
{
	int n ,i;
	vector<int> arr = {2,3,5,2,9,7,1};

	//for(int i =0 ;i <n;i ++)
	//{
		//cin >> arr[i];
	//}
	sum(arr,3);
}