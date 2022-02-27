#include<bits/stdc++.h>
using namespace std;
class stack_array{
private:
	int *data;
	int nextIndex;
	int capacity;

	/*
	stack_array(int totalsize)
	{
		data = new int[totalsize];
		nextIndex = 0;
		capacity = totalsize;
	}*/
	//using dynamic arary
	public:
	stack_array()
	{
		nextIndex = 0;
		capacity = 4;
		data = new int[capacity];

	}
	//return size of stack
	int size()
	{
		return nextIndex;
	}

	bool isEmpty()
	{
		if(nextIndex == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//using dynamic array
	void push(int element)
	{
		if(nextIndex == capacity)
		{
			int *newData = new int[2 * capacity];

			for(int i =0; i<capacity;i++)
			{
				newData[i] = data[i]; 
			}
			capacity = capacity * 2;
			delete [] data;
			data = newData;
		}
		data[nextIndex] = element;
			nextIndex++;
		
	}
	/*
	void push(int element)
	{
		if(nextIndex == capacity)
		{
			cout<<"stack is full"<<endl;
		}
		else
		{
			data[nextIndex] = element;
			nextIndex++;
		}
	}
	*/

	int pop()
	{
		if(isEmpty())
		{
			cout<<"stack is empty"<<endl;
			return INT_MIN;
		}
		else
		{
			nextIndex--;
			return data[nextIndex];
		}
	}
	int top()
	{
		if(isEmpty())
		{
			cout<<"stack is empty"<<endl;
			return INT_MIN;
		}
		else
		{
			return data[nextIndex - 1];
		}
	}

};


int main()
{
	//stack_array s(4);
	stack_array s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);


	cout<<s.top()<<endl;
	cout<<s.size()<<endl;

	
	//cout<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	//cout<<s.pop()<<endl;
	cout<<s.isEmpty()<<endl;
}