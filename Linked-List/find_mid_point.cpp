#define NULL 0
#include<bits/stdc++.h>
class node{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data=data;
		next = NULL;
	}
};
using namespace std;
node *input()
{
	int data;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data != -1)
	{
		node *newNode = new node(data);
		if(head==NULL)
		{
			head= newNode;
			tail=newNode;
		}
		else
		{
			tail->next = newNode;
			tail= newNode;
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
int length(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1 + length(head->next);
}
//1st approach
/*
void mid(node * head)
{
	int count =0;
	int len = length(head);
	node *temp=head;
	if(head==NULL)
	{
		return;
	}
	while(temp!=NULL)	
	{
		if(count == (len-1)/2)
		{
			cout<<temp->data<<endl;
		}
		temp=temp->next;
		count++;

	}
}
*/
node * mid(node *head)
{
	node *slow = head;
	node *fast = head->next;
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
int main()
{
	node *head = input();  
	print(head);
	cout<<endl;
	node *count=mid(head);
	cout<<count->data;
}