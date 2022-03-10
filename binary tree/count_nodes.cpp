#define NULL 0
#include<bits/stdc++.h>
using namespace std;
template<typename t>
class binaryTreeNode{
public:
	t data;
	binaryTreeNode* left;
	binaryTreeNode* right;
	binaryTreeNode(t data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
	~binaryTreeNode()
	{
		delete left;
		delete right;
	}

};

binaryTreeNode<int>* input()
{
	int data;
	cin>>data;
	if(data == -1)
	{
		return NULL;
	}
	binaryTreeNode<int>* root = new binaryTreeNode<int>(data);
	queue<binaryTreeNode<int>*> q;
	q.push(root);
	while(!q.empty())
	{
		binaryTreeNode<int>* front = q.front();
		q.pop();
		int leftchild;
		cin>>leftchild;
		if(leftchild != -1 )
		{
			binaryTreeNode<int>* child = new binaryTreeNode<int>(leftchild);
			front->left = child;
			q.push(child);
		}
		int rightchild;
		cin>>rightchild;

		if(rightchild != -1)
		{
			binaryTreeNode<int>* child = new binaryTreeNode<int>(rightchild);
			front->right = child;
			q.push(child);
		}

	}
	return root;
}
void print(binaryTreeNode<int>* root)
{
	if(root == NULL)
	{
		return;
	}
	queue<binaryTreeNode<int>*> q;
	q.push(root);

	while(!q.empty())
	{
		binaryTreeNode<int>* front = q.front();
		q.pop();

		cout<<front->data<<":";

		if(front->left != NULL)
		{
			q.push(front->left);
			cout<<"L"<<front->left->data;
			
		}
		else
		{
			cout<<"L"<<"-1";
		}

		if(front->right != NULL)
		{
			q.push(front->right);
			cout<<"R"<<front->right->data;
			
		}
		else
		{
			cout<<"R"<<"-1";
		}
		cout<<endl;

	}
}
//recursive
/*
int countNodes(binaryTreeNode<int>* root)
{
	if(root == NULL)
	{
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}
*/
//using level order traversal
int countNodes(binaryTreeNode<int>* root)
{
	if(root == NULL)
	{
		return 0;
	}

	queue<binaryTreeNode<int>*> q;
	q.push(root);
	int count = 1;
	while(!q.empty())
	{
		binaryTreeNode<int>* front = q.front();
		q.pop();
		

		if(front->left != NULL)
		{
			q.push(front->left);
			count++;
		}

		if(front->right != NULL)
		{
			q.push(front->right);
			count++;
		}
	}
	return count;
}

int main()
{
	binaryTreeNode<int>* root = input();
	print(root);
	cout<<endl;
	cout<<countNodes(root);
}