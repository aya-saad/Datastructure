// File:StackL.cpp
// Linked List Stack Class implementation

#include <iostream>
using namespace std;

// Class Constructor
template <class Type>
StackL<Type>::StackL()
{ top = NULL; }

// Class Destructor
template <class Type>
StackL<Type>::~StackL()
{	NodePointer cursor;
	while(top != NULL) 
	{ 	cursor = top;	top = top->next;
		delete cursor; 	}
}

// return True if stack is empty
template <class Type>
bool StackL<Type>::stackIsEmpty() const
{ return (top == NULL);}


// push a node with data (v) at the top of the stack; 
// the new node becomes the top node.
template <class Type>
void StackL<Type>::push(Type v)
{ 	NodePointer pnew = new node ;
	pnew->e = v; pnew->next = top; top = pnew; }


// Pop top node. Next node becomes top node.
template <class Type>
void StackL<Type>::pop(Type &v)
{	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; cursor = top;
	  top = top->next; delete cursor; }

}

// Retrieve top node without removing it
template <class Type>
void StackL<Type>::stackTop(Type &v) const
{	NodePointer cursor;
	if(stackIsEmpty()) cout << "Stack Underflow" << endl; 
	else 
	{ v = top->e; }

}


