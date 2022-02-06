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

void reverseWord(char arr[])
{
	int i=0,j=0;
	int len=strlen(arr);
	char temp[30];

	for(i=0;i<len;i++)
	{
		
		while(i<len )

		{
			if(arr[i]==' ')
			{
				break;

			}
			else
			{
				temp[j]=arr[i];
				j++;i++;

			}
			

		}
		while(j>0)
		{
			j--;
			arr[i-j-1]=temp[j];
		}
	}


}




int main()
{
	char arr[20],c1,c2;
	cin.getline(arr,20);	
	reverse(arr);

	reverseWord(arr);
	cout<<arr<<endl;

}