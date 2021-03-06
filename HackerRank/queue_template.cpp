#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
#define MAX_SIZE 1000  

class Queue
{
private:
	int A[MAX_SIZE];
	int front, rear; 
public:
	Queue()
	{
		front = -1; 
		rear = -1;
	}

	bool IsEmpty()
	{
		return (front == -1 && rear == -1); 
	}

	bool IsFull()
	{
		return (rear+1) == front ? true : false;
	}

	void Enqueue(int x)
	{
		cout/*<<"Enqueuing "*/<<x<<" \n";
		if(IsFull())
		{
			cout<<"Error: Queue is Full\n";
			return;
		}
		if (IsEmpty())
		{ 
			front = rear = 0; 
		}
		else
		{
		    rear = (rear+1);
		}
		A[rear] = x;
	}

	void Dequeue()
	{
		cout<<"Dequeuing \n";
		if(IsEmpty())
		{
			cout<<"Error: Queue is Empty\n";
			return;
		}
		else if(front == rear ) 
		{
			rear = front = -1;
		}
		else
		{
			front = (front+1);
		}
	}
	int Front()
	{
		if(front == -1)
		{
			cout<<"Error: cannot return front from empty queue\n";
			return -1; 
		}
		return A[front];
	}
	void Print()
	{
		int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % MAX_SIZE; 
			cout<<A[index]<<" ";
		}
		cout<<"\n\n";
	}
};
int main()
{
   Queue Q;
   Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
}

