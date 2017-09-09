// File:QueueL.cpp
// Linked List Queue Class implementation

#include <iostream>
using namespace std;

// Class Constructor
template <class Type>
QueueL<Type>::QueueL()
{
	front = NULL; rear = NULL; count = 0;
}

// Class Destructor
template <class Type>
QueueL<Type>::~QueueL()
{
	NodePointer cursor;
	while(front != NULL) 
	{ 
		cursor = front;
		front = front->next;
		delete cursor;
	}
}


// Add a node with data (v) at the rear of the queue; 
// the new node becomes the rear node.
template <class Type>
void QueueL<Type>::enqueue(Type v)
{ 	
	NodePointer pnew = new node; 
	pnew->e = v;  pnew->next = NULL;
	if(queueIsEmpty()) 
	{ front = pnew; rear = pnew;}
	else
	{ rear->next = pnew; rear = pnew; }  	
	count++; 
}

// dequeue front node. Next node becomes front node.
template <class Type>
void QueueL<Type>::dequeue(Type &v)
{
	NodePointer cursor;
	if(queueIsEmpty()) cout << "Queue is Empty" << endl; 
	else 
	{
			v = front->e; 
			cursor = front;
			front = front->next;
			delete cursor;  count--;
	}
}

// Retrieve front node without removing it
template <class Type>
void QueueL<Type>::queueFront(Type &v) const
{
	NodePointer cursor;
	if(queueIsEmpty()) cout << "Queue is Empty" << endl; 
	else { v = front->e; }
}

// return True if queue is empty
template <class Type>
bool QueueL<Type>::queueIsEmpty() const
{
	return (count == 0);
}

// Queue Length
template <class Type>
int QueueL<Type>::queueLength() const
{ return count; }



