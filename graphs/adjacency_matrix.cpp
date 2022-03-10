#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,e;
	cin >> n >> e;
/*
	int **edges = new int*[n];
	

	for(int i =0;i<n;i++)
	{
		edges[i] = new int[n];

		for(int j =0;j<n;j++)
		{
			edges[i][j] == 0;
		}
	}
	*/

	bool edges[n][n];
	memset(edges , false , sizeof(edges));




	for(int i =0;i<e;i++)
	{
		int x,y;
		cin >> x >> y;

		edges[x][y]=1;
		edges[y][x]=1;
	}
	//memset(edges , 0 , sizeof(edges));
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<n;j++)
		{
			cout<<edges[i][j]<<" ";
		}
		cout<<endl;
	}


	
}