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

void print(treeNode<int>* root)
{
	if(root == NULL)
	{
		return;
	}

	queue<treeNode<int>*> q;
	q.push(root);

	while(!q.empty())
	{
		treeNode<int>* front = q.front();
		q.pop();
		cout<<front->data<<":";
		for(int i =0;i<front->children.size();i++)
		{
			if(front->children.size()-1 == i)
			{
				cout<<front->children[i]->data;
			}
			else
			{
				cout<<front->children[i]->data<<",";
			}
			q.push(front->children[i]);  
		}
		cout<<endl;
	}
}
/*
bool similar(treeNode<int>* root1 , treeNode<int>* root2)
{
	if(root1==NULL && root2==NULL)
	{
		return true;
	}
	if(root1->children.size() != root2->children.size())\
	{
		return false;
	}
	if(root1->data != root2->data)
	{
		return false;
	}
	bool ans = true;
	for(int i =0; i<root1->children.size();i++)
	{
		bool output = similar(root1->children[i] , root2->children[i]);

		if(output == false)
		{
			ans = output;
			return ans;
		}
	}
	return ans;

}
*/
bool similar(treeNode<int>* root1,treeNode<int>* root2)
{
	if(root1 == NULL && root2 == NULL){
		return true;
	}
	if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)){
		return false;
	}
	if((root1 -> data != root2 -> data) || (root1 -> children.size() != root2 -> children.size())){
		return false;
	}
	
	queue<treeNode<int>*> q1;
	queue<treeNode<int>*> q2;

	q1.push(root1);
	q2.push(root2);
	int count = 0;

	while(!q1.empty() && !q2.empty())
	{
		treeNode<int> *front1 = q1.front();
		treeNode<int>* front2 = q2.front();
		q1.pop();q2.pop();
		
		if(front1->data != front2->data)
		{
			return false;
		}
		for(int i =0;i<front1->children.size();i++)
		{
			q1.push(front1->children[i]);
		}
		for(int i =0;i<front2->children.size();i++)
		{
			q2.push(front2->children[i]);
		}
	}
	return true;

}

int main()
{
	treeNode<int>* root1 = input();
	treeNode<int>* root2 = input();
	print(root1);
	cout<<endl;
	print(root2);
	cout<<endl;
	//treeNode<int>* ans = similar(root1,root2);
	//cout<<ans;
	cout<<(similar(root1,root2)?"true":"false")<<endl;
	
}