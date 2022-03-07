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
treeNode<int>* second(treeNode<int>* root)
{
	if(root == NULL)
	{
		return 0;
	}
	treeNode<int>* max = root;

	for(int i =0;i<root->children.size();i++)
	{
		treeNode<int>* output = second(root->children[i]);

		if(output->data > max->data)
		{
			max = output;
		}
	}

	return max;



}
*/
int second(treeNode<int>* root)
{
	queue<treeNode<int>*>q;
	vector<int> ans;

	q.push(root);
	int max =0;

	while(!q.empty())
	{
		treeNode<int>* front = q.front();
		q.pop();
		for(int i =0;i<front->children.size();i++)
		{
			q.push(front->children[i]);
		}

		if(front->data > max)
		{
			max = front->data;
			ans.push_back(front->data);
		}
	}
	sort(ans.begin() , ans.end());

	ans.pop_back();
	cout<<ans.back();



}


int main()
{
	treeNode<int>* root = input();
	print(root);
	cout<<endl;
	//treeNode<int>* ans = second(root);
	//cout<<ans->data;
	second(root);

}