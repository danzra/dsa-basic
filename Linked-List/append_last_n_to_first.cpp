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
int length(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1 + length(head->next);

}
node *append(node *head , int n)
{
	int len = length(head);
	
	if(n!=0 && n<len)
	{
		int count = len-n;
		node *temp1 = head;
		node *temp3 = NULL;

		while(count)
		{
			temp3=temp1;
			temp1 = temp1->next;
			count--;  
		}
		temp3->next = NULL;
		node* temp2 = temp1;
		while(temp1->next!=NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = head;
		head = temp2;
	}
	return head;


}
int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	//int count = length(head);
	//cout<<count;
	head = append(head,3);
	print(head);

}