#define NULL 0
#include <bits/stdc++.h>
using namespace std;
template <typename t>
class treeNode
{
public:
	t data;
	vector<treeNode<t> *> children;

	treeNode(t data)
	{
		this->data = data;
	}
};

treeNode<int>* input()
{
	queue<treeNode<int>*> pendingNodes;
	int data;
	cout<<"enter root data"<<endl;
	cin>>data;

	treeNode<int>* root = new treeNode<int>(data);
	pendingNodes.push(root);

	while(!pendingNodes.empty())
	{
		treeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout<<"no. of children of: "<<front->data<<endl;
		int n;
		cin>>n;

		for(int i =0;i<n;i++)
		{
			int childData;
			cout<<"enter "<<i+1<<" data of "<<front->data<<endl;
			cin>>childData;

			treeNode<int>* child = new treeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);

		}
	}
	return root;

}
/*
treeNode<int> *input()
{
	int data;
	cout << "enter data" << endl;
	cin >> data;
	treeNode<int> *root = new treeNode<int>(data);

	cout << "enter number of children" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		treeNode<int> *child = input();
		root->children.push_back(child);
	}

	return root;
}
*/
/*
void print(treeNode<int> *root)
{
	if (root == NULL)
	{
		return;
	}

	cout << root->data << ":";

	for (int i = 0; i < root->children.size(); i++)
	{
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size(); i++)
	{
		print(root->children[i]);
	}
}
*/
void print(treeNode<int>* root)
{
	if(root == NULL)
	{
		return;
	}

	queue <treeNode<int>*> q;
	q.push(root);
	

	while(!q.empty())
	{
		treeNode<int> *front = q.front();
		q.pop();
		cout<<front->data<<":";

		for(int i =0 ; i<front->children.size(); i++)
		{
			if(front->children.size() - 1 != i)
			{
				cout << front -> children[i] -> data << ",";
			}
			else
			{
				cout << front -> children[i] -> data;
			}
			q.push(front->children[i]);
		}
		cout<<endl;
	}
}
int main()
{ /*
  treeNode<int>* root = new treeNode<int>(1);
  treeNode<int>* node1 = new treeNode<int>(2);
  treeNode<int>* node2 = new treeNode<int>(3);
  treeNode<int>* node3 = new treeNode<int>(4);
  root->children.push_back(node1);
  root->children.push_back(node2);
  node1->children.push_back(node3);
  */
	treeNode<int> *root = input();

	print(root);
}