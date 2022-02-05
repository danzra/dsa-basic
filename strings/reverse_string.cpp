#include<bits/stdc++.h>
using namespace std;

void reverse(char arr[])
{
	int l=strlen(arr);
	int i=0,j=l-1;
	while(i<j)
	{
		char temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;

	}
}

int main()
{
	char arr[20],c1,c2;
	cin.getline(arr,20);	

	reverse(arr);
	cout<<arr<<endl;

}