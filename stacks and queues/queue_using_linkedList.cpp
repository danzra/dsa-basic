#include<bits/stdc++.h>
using namespace std;
template <typename t>
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

class queue_list{
	node<t> *head;
	t size;
	node<t> *tail;
public:
	queue_list()
	{
		head = NULL;
		tail = NULL;
		size = 0;

	}
	int getSize()
	{
		return size;
	}

	bool isEmpty()
	{
		if(size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void enqueue(t element)
	{
		node<t> *newNode = new node<t>(element);
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
		size++;
	}
	t front()
	{
		if(isEmpty())
		{
			return 0;
		}
		return head->data;
	}

	t dequeue()
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
};
int main()
{
	queue_list<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);	
	
	cout<<q.front()<<endl;
	cout<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	q.enqueue(50);
	q.enqueue(60);
	q.enqueue(70);
	//q.enqueue(80);
	cout<<endl;
	//cout<<q.front()<<endl;
	while(!q.isEmpty())
	{
		cout<<q.dequeue()<<endl;
	}


}
