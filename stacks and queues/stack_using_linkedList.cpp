#include<bits/stdc++.h>
using namespace std;
template<typename t>
class node{
public:
	t data;
	node<t> *next;
	node(t data)
	{
		this->data = data;
		next = NULL;
	}
};
template <typename t>

class stack_list{
	node<t> *head;
	int size;
public:
	stack_list()
	{
		head = NULL;
		size = 0;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		if(size==0)
		{
			return true;
		}
		else
			return false;
	}

	void push( t element)
	{
		node<t> *newNode = new node <t> (element);

		newNode->next = head;
		head = newNode;
		size++;
	}

	t pop()
	{
		if(isEmpty())
		{
			return 0;
		}
		t ans = head->data;

		node<t> *temp = head;

		head = head->next;
		delete temp;
		size--;
		return ans;
	}

	t top()
	{
		if(isEmpty())
		{
			return 0;
		}
		return head->data;
	}

};
int main()
{
	//stack_array s(4);
	stack_list<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);


	cout<<s.top()<<endl;
	cout<<s.getSize()<<endl;

	
	//cout<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	//cout<<s.pop()<<endl;
	cout<<s.isEmpty()<<endl;
}