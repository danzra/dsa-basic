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
node *del(node *head , int m , int n)
{
	if(head==NULL ||head->next == NULL)
	{
		return head;
	}
	int c1 = 1;
	int c2 =1;
	node *temp = head;
	node *t1;
	node *t2;
	
	while(temp->next!=NULL && c1<m)
	{
		temp = temp->next;
		c1++;
	}
	t1 = temp;
	temp = temp->next;
	while(temp->next!=NULL && c2<n)
	{
		temp = temp->next;
		c2++;
	}
	t2 = temp->next;
	delete temp;
	node *mm = del(t2,m,n);
	t1->next = mm;

	return head;
}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	head =del(head,2,3);
	print(head);
}