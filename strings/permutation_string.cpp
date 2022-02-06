#include<bits/stdc++.h>
using namespace std;

int permutation(string arr1,string arr2)
{
	int count=0;
	int len1=arr1.length();
	int len2=arr2.length();
	if(len1!=len2)
	{
		cout<<"no"<<endl;
	}

	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	for(int i=0;i<len1 ;i++)
	{
		if(arr1[i]==arr2[i])
		{
			count++;
			
		}
			
		
	}
	if(count==len1)
	{
		cout<<"yes"<<endl;
	}


}


int main()
{
	string arr1 = "lovee";
	string arr2="lovey";

	//cin>>arr1;
	//cin>>arr2;	

	
	cout<<permutation(arr1,arr2)<<endl;

}

