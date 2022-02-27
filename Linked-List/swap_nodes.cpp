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
//swap data
/*
node *swap_nodes(node *head , int m ,int n)
{
	node *p=head,*q=head;
    
    for(int index=0;index<m;index++)
    {
        p=p->next;
    }
     for(int index=0;index<n;index++)
    {
        q=q->next;
    }
    
    int x=p->data;
    p->data=q->data;
    q->data=x;
    
    return head;

}
*/
node *swap_nodes(node *head , int m , int n)
{
	node *p1 = NULL;
	node *p2 = NULL;
	node *c1 = head;
	node *c2 = head;
	node *temp =head;
	node *prev = NULL;
	int count = 0;
	while(temp!=NULL)
	{
		if(count == m)
		{
			c1 = temp;
			p1 = prev;
		}
		else if(count == n)
		{
			c2 = temp;
			p2 = prev;
		}
		prev = temp;
		temp = temp->next;
		count++;

	}

	if(p1!=NULL)
	{
		p1->next = c2;
	}
	else
	{
		head= c2;
	}

	if(p2!=NULL)
	{
		p2->next = c1;
	}
	else
	{
		head = c1;
	}
	node *p = c2->next;
	c2->next = c1->next;
	c1->next = p;
	return head;
}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	head = swap_nodes(head , 0 , 1);
	print(head);
}