#define NULL 0
class node{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data=data;
		next=NULL;
	}

};
#include<bits/stdc++.h>
using namespace std;
node *input()
{
	int data;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	
	while(data!= -1)
	{
		node *newNode = new node(data);
		if(head==NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail=newNode;
		}
		cin>>data;

	}
	return head;
}
void print(node *head)
{
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<endl;
	print(head->next);

}
int find_node(node *head , int n)
{
	if(head==NULL)
	{
		return -1;
	}
	if(head->data == n)
	{
		return 0;
	}
	int output = find_node(head->next , n);

	if(output == -1)
	{
		return output;
	}
	else
	{
		return 1 + output;
	}

	
}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	int count =find_node(head,3);
	cout<<count;
}