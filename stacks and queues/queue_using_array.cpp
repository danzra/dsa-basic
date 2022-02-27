#include<bits/stdc++.h>
using namespace std;
template <typename t>
class queue_array{
	t* data;
	int firstindex;
	int nextIndex;
	int size;
	int capacity;
public:
	queue_array()
	{
		data = new t[capacity];
		firstindex = -1;
		nextIndex = 0;
		size = 0;
		capacity = 4;

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
		{
			return false;
		}
	}

	void enqueue(t element)
	{
		if(size == capacity)
		{
			t *newData = new t[2 * capacity];
			int j =0;
			for(int i = firstindex; i<capacity;i++)
			{
				newData[j] = data[i];
				j++;
			}
			for(int i = 0; i<firstindex;i++)
			{
				newData[j] = data[i];
				j++;
			}
			firstindex = 0;
			nextIndex = capacity;
			delete []data;
			data = newData;
			capacity = capacity*2;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex+1)%capacity;
		size++;
		if(firstindex== -1)
		{
			firstindex = 0;

		}
	}

	t front()
	{
		if(isEmpty())
		{
			return 0;
		}
		else
			return data[firstindex];
	}

	t dequeue()
	{
		if(isEmpty())
		{
			return 0;
		}
		t ans = data[firstindex];
		firstindex = (firstindex+1)%capacity;
		size--;
		return ans;
	}


};

int main()
{
	queue_array<int> q;
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
	q.enqueue(80);
	cout<<endl;
	//cout<<q.front()<<endl;
	while(!q.isEmpty())
	{
		cout<<q.dequeue()<<endl;
	}


}
