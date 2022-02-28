#include<bits/stdc++.h>
using namespace std;

void reverse_queue(queue<int> &q1)
{
	if(q1.size()== 0 || q1.size()==1)
	{
		return;
	}
	int temp = q1.front();
	q1.pop();

	reverse_queue(q1);

	//while(!q1.empty())
	//{
		//q2.push(q1.front());
		//q1.pop();
	//}

	//while()

	q1.push(temp);

}

int main()
{
	queue<int> q1;

	for(int i = 1;i<6;i++)
	{
		q1.push(i);
	}

	reverse_queue(q1);

	while(!q1.empty())
	{
		cout<<q1.front()<<endl;
		q1.pop();
	}
}