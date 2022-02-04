#include<bits/stdc++.h>
using namespace std;

void merge_array(int arr1[] , int arr2[] ,int s1 , int s2,int res[])
{
	int i=0,j=0,k=0;
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			res[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			res[k]= arr2[j];
			j++;
			k++;
		}

	}
	while(i<s1)
	{
		res[k++]=arr1[i++];
	}
	while(j<s2)
	{
		res[k++] = arr2[j++];
	}

}



int main()
{
	int s1,s2,i,j,k;
	int arr1[10],arr2[20],res[50];

	cin>>s1;
	cin>>s2;

	for(i=0; i<s1;i++)
	{
		cin>>arr1[i];
	}
	for(j=0;j<s2;j++)
	{
		cin>>arr2[j];
	}

	merge_array(arr1,arr2,s1,s2,res);
	
	for(k=0;k<(s1+s2);k++)
	{
		cout<<res[k]<<endl;
	}
}