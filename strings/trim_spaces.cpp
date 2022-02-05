#include<bits/stdc++.h>
using namespace std;

void trim(char arr[])
{
	int len=strlen(arr);
	int i=0,j=0;
	while(arr[i])
	{
		if(arr[i]!=' ')
		{
			arr[j]=arr[i];
			j++;
			
		}
		i++;
	}
	arr[j]='\0';
}


int main()
{
	char arr[20],c1,c2;
	cin.getline(arr,20);	

	trim(arr);
	cout<<arr<<endl;

}