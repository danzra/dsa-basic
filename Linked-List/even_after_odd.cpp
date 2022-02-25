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
node *even( node *head)
{
	node *evenhead = NULL;
	node *oddhead =NULL;
	node *eventail = NULL;
	node *oddtail = NULL;
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	while(head!=NULL)
	{		
		if((head->data)%2 == 0)
		{
			if(evenhead==NULL)
			{
				evenhead = head;
				eventail = head;
				head = head->next;
			}
			else
			{
				eventail->next = head;
				eventail = head;
				head = head->next;
			}
		}
			else if((head->data)%2 !=0 || (head->data)==1)
			{
				if(oddhead==NULL)
				{
					oddhead = head;
					oddtail =head;
					head = head->next;
				}
				else
				{
					oddtail->next = head;
					oddtail = head;
					head = head->next;
				}
			}
		}
		oddtail->next = evenhead;
		eventail->next = NULL;
		return oddhead;	

}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	head = even(head);
	print(head);
}