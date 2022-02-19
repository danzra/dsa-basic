#define NULL 0
class node{
public:
	int data;
	node* next;
	node(int data)
	{
		this->data=data;
		next = NULL;
	}
};
#include<bits/stdc++.h>
using namespace std;
node *takeInput()
{
	int data;
	cin>>data;
	node* head =NULL;
	node* tail = NULL;
	while(data!= -1)
	{
		node *newNode = new node(data);
		if(head==NULL)
		{
			head = newNode;
			tail= newNode;

		}
		else
		{
			tail->next = newNode;
			//tail = newNode;
			//or
			
			tail= tail->next;
		}
		cin>>data;

	}
	return head;
}
node* del(node *head, int n)
{
	node *temp = head;
	int count =0;
	if(n==0)
	{		
		head = head-> next;
		return head;
	}
	while(count<n-1 && temp!=NULL)
	{
		temp =  temp->next;
		count++;
	}
	if(temp!=NULL)
	{
		temp->next = temp->next->next;
	}
	return head;
}
node *del_recursive(node *head , int n)
	{
		if(head == NULL)
		{
			return head;
		}
		if(n==0)
		{
			head=head->next;
			return head;
		}
		else if(n==1)
		{
			node *temp = head;
			node *temp2 = temp->next;
			temp->next = temp2->next;
			return head;
			delete temp2;
		}

		del_recursive(head->next,n-1);
		return head;
	}
void print( node *head)
{
	node *temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<" "<<endl;
		temp = temp->next;
	}
}
int main()
{
	node *head = takeInput();
	print(head);
	cout<<endl;
	//length(head);
	//cout<<endl;
	//pos(head,2);
	//head = insert(head,5,99);
	//print(head);
	//head = del(head,1);
	//print(head);
	//int count = length_recursive(head);
	//cout<<count;
	//head = insert_recursive(head,3,99);
	//print(head);
	head = del_recursive(head , 2);
	print(head);

	//declaring object n1 statically
	/*
	node n1(1);
	node* head = &n1; 

	node n2(2);
	node n3(3);
	node n4(4);
	node n5(5);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	print(head);
	*/ 

	//cout<<head->data<<endl;
	//dynamically
	/*
	node *a1 = new node(10);
	node *a2 = new node(20);
	node *head = a1;
	a1->next a2;
	*/
}
