#define NULL 0
#include<bits/stdc++.h>
using namespace std;
template<typename t>
class treeNode{
public:
	t data;
	vector<treeNode<int>*> children;
	treeNode(t data)
	{
		this->data = data;
	}

};
treeNode<int>* input()
{
	int data;
	cin>>data;
	treeNode<int>* root = new treeNode<int>(data);
	queue<treeNode<int>*> q;
	q.push(root);

	while(!q.empty())
	{
		treeNode<int> *front = q.front();
		q.pop();
		int n;
		cin>>n;

		for(int i =0;i<n;i++)
		{
			int data2;
			cin>>data2;
			treeNode<int>* child = new treeNode<int>(data2);
			front->children.push_back(child);
			q.push(child);
		}
	}
	return root;
}

void print(treeNode<int>* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<endl;

	for(int i =0;i<root->children.size();i++)
	{
		print(root->children[i]);
	}
}
/*
void next(treeNode<int>* root , int n)
{
	queue<treeNode<int>*> q1;
	vector<int> ans;
	if(root==NULL)
	{
		return;
	}

	q1.push(root);

	while(!q1.empty())
	{
		treeNode<int>* front = q1.front();
		q1.pop();

		for(int i =0;i<front->children.size();i++)
		{
			q1.push(front->children[i]);
		}
		if(front->data > n)
		{
			ans.push_back(front->data);
		}
	}
	
	cout<<*min_element(ans.begin(),ans.end());


}
*/
treeNode<int>* next(treeNode<int>* root , int n)
{
	if(root == NULL)
	{
		return NULL;
	}
	treeNode<int>* max = NULL;
	if(root->data > n)
	{
		max = root;
	}

	for(int i =0;i<root->children.size();i++)
	{
		treeNode<int>* output = next(root->children[i] , n);

		if(output == NULL)
		{
			return max;
		}
		else if(output->data > n && output->data < max->data)
			{
				max = output;
			}
		else if(max == NULL)
			{
				max = output;
			}
			
		
	}
	return max;
}
int main()
{
	treeNode<int>* root = input();
	print(root);
	cout<<endl;
	treeNode<int>* ans = next(root ,1);
	cout<<ans->data;

}