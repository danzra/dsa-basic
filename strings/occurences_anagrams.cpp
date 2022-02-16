#include<bits/stdc++.h>
using namespace std;

int count(string str1 ,  string str2)
{
	unordered_map <char,int> m;
	for(int i =0 ; i< str2.size() ;i++)
		{
			m[str2[i]]++;
		}
	vector<int> ans;
	int i =0;
	int j = 0 , k = str2.size() , count = m.size();
	

	while(j<str1.size())
	{
		if(m.find(str1[j])!=m.end())
		{
			m[str1[j]]--;
			if(m[str1[j]]==0)
			{
				count--;
			}
		}
		if((j-i+1)<k)
		{
			j++;
		}
		else if((j-i+1)==k)
		{
			if(count==0)
			{
				ans.push_back(i);
			}
			if(m.find(str1[i])!=m.end())
			{
				m[str1[i]]++;
				if(m[str1[i]]==1)
				{
					count++;
				}
			}
			i++;
			j++;
		}


	}
	for(int i =0 ;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
}
int main()
{
	string str1 = "forxxorfxdofr";
	string str2 = "for";
	count(str1,str2);
}
