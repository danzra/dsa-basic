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
class pair1{
public:
	node *head;
	node *tail;
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
//1st approach time complexity= O(N^2)
/*
node *reverseLL(node *head)
{
	if(head == NULL || head->next== NULL)
	{
		return head;
	} 
	node *output = reverseLL(head->next);
	node *temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = head;
	temp->next->next=NULL;
	return output;
}
*/
//2nd approach using double node time complexity = O(N)
/*
pair1 reverse_LL(node *head)
{
	if(head==NULL || head->next==NULL)
	{
		pair1 ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}
	pair1 output = reverse_LL(head->next);
	output.tail->next = head;
	head->next= NULL;

	pair1 ans;
	ans.head = output.head;
	ans.tail = head;
	return ans;
}
node *reverseLL(node *head)
{
	return reverse_LL(head).head;
}
*/
//3rd approach time complexity = O(N)
/*
node *reverseLL(node *head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node *tail = head->next;
	node *output = reverseLL(head->next);	
	tail->next = head;
	head->next = NULL;
	return output;
}
*/
//iterative approach
node *reverseLL(node *head)
{
	node *prev = NULL;
	node *current = head;
	node * temp = NULL;
	while(current!=NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	return prev;
}

int main()
{
	node *head = input();  
	print(head);
	cout<<endl;
	head= reverseLL(head);
	print(head);
}