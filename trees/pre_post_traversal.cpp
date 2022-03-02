#include<bits/stdc++.h>
using namespace std;
template<typename t>
class treeNode{
public:
	t data;
	vector<treeNode<t>*> children;
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

void pre_order(treeNode<int>* root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<endl;

	for(int i =0;i<root->children.size();i++)
	{
		pre_order(root->children[i]);
	}
}

void post_order(treeNode<int> * root)
{
	if(root == NULL)
	{
		return;
	}

	for(int i =0;i<root->children.size();i++)
	{
		post_order(root->children[i]);
	}
	cout<<root->data<<endl;
}

int main()
{
	treeNode<int>* root= input();
	pre_order(root);
	cout<<endl;
	post_order(root);
	
}