#define NULL 0
class node{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data = data;
		next = NULL;
	}

};
#include<bits/stdc++.h>
using namespace std;

node *input()
{
	int data;
	cin>>data;
	node *head =NULL;
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
			tail = newNode;
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
node *mid_point(node *head)
{
	node *slow = head;
	node *fast = head->next;
	while(fast!=NULL && fast->next!=NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
}
node *merge_ll(node *h1 , node *h2)
{
	node *fh=NULL;
	node *ft =NULL;
	while(h1!=NULL && h2!=NULL)
	{
		if(h1->data <= h2->data)
		{
			if(fh == NULL)
			{
				fh = h1;
				ft = h1;
				h1 = h1->next;
			}
			else
			{
				ft->next = h1;
				ft = h1;
				h1 = h1->next;
			}
		}
		else if(h1->data > h2->data)
		{
			if(fh == NULL)
			{
				fh = h2;
				ft = h2;
				h2 = h2->next;
			}
			else
			{
				ft->next = h2;
				ft = h2;
				h2 = h2->next;
			}
		}
	}
	while(h1!=NULL)
	{
		ft->next = h1;
		ft = h1;
		h1 = h1->next;
	}
	while(h2!=NULL)
	{
		ft->next = h2;
		ft = h2;
		h2 = h2->next;
	}
	return fh;
}
node *mergeSort(node *head)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	node *mid = mid_point(head);
	node *head1 = head;
	node *head2 = mid->next;
	mid->next=NULL;
	node *h1 = mergeSort(head1);
	node *h2 = mergeSort(head2);
	node *h3 = merge_ll(h1,h2);
	return h3;
}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	head = mergeSort(head);
	print(head);
}