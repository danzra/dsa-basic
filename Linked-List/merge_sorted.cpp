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
node *mergeSorted(node *h1,node *h2)
{
	node *head=NULL;
	node *tail=NULL;
	while(h1!=NULL && h2!=NULL)
	{
		if(h1->data <= h2->data)
		{
			if(head==NULL)
			{
				head = h1;
				tail = h1;
				h1 = h1->next;
			}
			else
			{
				tail->next = h1;
				tail = h1;
				h1 = h1->next;
			}
		}
		else if(h1->data > h2->data)
		{
			if(head==NULL)
			{
				head = h2;
				tail = h2;
				h2 = h2->next;
			}
			else
			{
				tail->next = h2;
				tail = h2;
				h2 = h2->next;
			}
		}
	}
	while(h1!=NULL)
	{
		tail->next = h1;
		tail = h1;
		h1 = h1->next;
	}
	while(h2!=NULL)
	{
		tail->next = h2;
		tail = h2;
		h2 = h2->next;
	}
	tail->next = NULL;
	return head;
}

int main()
{
	node *h1 = input();
	node *h2 = input();
	print(h1);
	cout<<endl;
	print(h2);
	cout<<endl;
	node *h3=mergeSorted(h1,h2);
	print(h3);
	
}