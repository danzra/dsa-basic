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
	int count =0;
	node *temp = head;
	while(temp!=NULL)
	{		
		if(temp->data==n)
		{
			return count;
		}
		temp=temp->next;
		count++;
	}
	return -1;
	
}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	int count =find_node(head,0);
	cout<<count;
}