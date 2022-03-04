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
treeNode<int>* childmax(treeNode<int>* root)
{
	queue<treeNode<int>*> q;
	stack<treeNode<int>*>s;
	int max =0; 
	q.push(root);

	while(!q.empty())
	{
		treeNode<int>* front = q.front();
		int maxsum = front->data;
		q.pop();		
		
		for(int i =0;i<front->children.size();i++)
		{
			maxsum += front->children[i]->data;
			q.push(front->children[i]);
		}

		if(maxsum > max)
		{
			max = maxsum;
			s.push(front);
		}
		
		//root = front;

	}

	return s.top();
}
*/

treeNode<int>* childmax(treeNode<int>* root)
{
	if(root == NULL)
	{
		return 0;
	}
	treeNode<int>* ans = root;
	int sum = root->data;

	for(int i =0;i<root->children.size();i++)
	{
		sum += root->children[i]->data;
	}

	for(int i =0 ;i <root->children.size();i++)
	{
		
		treeNode<int>* child = childmax(root->children[i]);
		int output = child->data;

		for(int i =0;i<child->children.size();i++)
		{
			output += child->children[i]->data;
		}

		if(output > sum)
		{
			sum = output;
			ans = child;
		}
	}
	return ans;

}
int main()
{
	treeNode<int>* root= input();
	print(root);
	cout<<endl;
	//cout<<childmax(root);
	treeNode<int>* ans1 = childmax(root);
	cout<<ans1->data;
}