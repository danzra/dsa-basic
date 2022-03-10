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
//long
/*
bool check(binaryTreeNode<int>* root , int x)
{
	bool ans = false;
	if(root == NULL)
	{
		return false;
	}
	if(root->data == x)
	{
		ans  = true;
	}
	

	if(root->left != NULL)
	{
		bool leftans = check(root->left , x);
		if(leftans == true)
		{
			ans = leftans;
			return ans;
		}
	}
	if(root->right != NULL)
	{
		bool rightans = check(root->right , x);
		if(rightans == true)
		{
			ans  = rightans;
			return ans;
		}
	}
	return ans;

}
*/
bool check(binaryTreeNode<int>* root , int x)
{
	if(root == NULL)
	{
		return false;
	}

	if(root->data == x)
	{
		return true;
	}
	bool leftans = check(root->left , x);
	bool rightans = check(root->right , x);

	return leftans || rightans;
}
int main()
{
	binaryTreeNode<int>* root = input();
	print(root);
	cout<<endl;
	cout<<(check(root , 9)?"true":"false")<<endl;
}