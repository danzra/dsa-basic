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
bool palindrome(node *head)
{
	if(head==NULL || head->next==NULL)
	{
		return true;
	}
	node *temp = head;
	node *prev = NULL;
	while(temp->next!=NULL)
	{
		prev= temp;
		temp=temp->next;
	}
	if(head->data==temp->data)
	{
		prev->next=NULL;
		//delete temp;
		return palindrome(head->next);
	}
	else
	{
		return false;
	}

}

int main()
{
	node *head = input();
	print(head);
	cout<<endl;
	//int count = length(head);
	//cout<<count;
	bool ans = palindrome(head);
	if(ans)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	
	

}