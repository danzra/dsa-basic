#include<bits/stdc++.h>
using namespace std;

void print(int** edges , bool* visited , int v , int sv )
{
	cout<<sv<<endl;

	visited[sv] = true;

	for(int i =0;i<v;i++)
	{
		if(i == sv)
		{
			continue;
		}

		if(edges[sv][i] == 1)
		{
			if(visited[i])
			{
				continue;
			}

			print(edges , visited , v , i);
		}
	}
}
/*
void DFS(int **edges,int v){
	bool *visited = new bool(v);
    	for(int i=0;i<v;i++){
        	visited[i] = false;
    	}
    	for(int i=0;i<v;i++){
    		if(!visited[i]){
    			print(edges,visited,v,i);
    		}
    	}
    	delete [] visited;
}
*/
int main()
{
	int v , e;
	cin>>v;
	cin>>e;

	int **edges = new int*[v];

	for(int i =0;i<v;i++)
	{
		edges[i] = new int[v];

		for(int j =0; j<v;j++)
		{
			edges[i][j] = 0;
		}
	}

	for(int i =0;i<e ;i++)
	{
		int n1 , n2;
		cin >> n1 >> n2;

		edges[n1][n2]=1;
		edges[n2][n1]=1;
	}

	bool* visited = new bool[v];

	for(int i =0;i<v;i++)
	{
		visited[i]=false;
	}

	print(edges , visited , v , 0);
/*
	DFS(edges,v);
    
    	for(int i=0;i<v;i++){
    		delete [] edges[i];
    	}
    	delete [] edges;
    	return 0;
    	*/

}