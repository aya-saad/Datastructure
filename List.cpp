// File:List.cpp
// Simple Linked List Class implementation file

#include <iostream>
using namespace std;
	
// Member Functions
// Class Constructor
template <class keyType, class dataType>
List<keyType, dataType>::List()
{
	head = NULL; cursor = NULL;  prev = NULL;
}

// Class Destructor
template <class keyType, class dataType>
List<keyType, dataType>::~List()
{
	makeListEmpty();
}

// return True if list is empty
template <class keyType, class dataType>
bool List<keyType, dataType>::listIsEmpty() const
{
	return (head == NULL);
}

// return True if current position is empty
template <class keyType, class dataType>
bool List<keyType, dataType>::curIsEmpty() const
{
	return (cursor == NULL);
}

// to make the current node the first node; if list is empty, 
// the current position is still empty
template <class keyType, class dataType>
void List<keyType, dataType>::toFirst()
{
	cursor = head;  prev = NULL;
}

// to return True if the current node is the first node or 
// if the list and the current position are both empty.
template <class keyType, class dataType>
bool List<keyType, dataType>::atFirst() const
{	
	return (cursor == head);  
}

// to advance to next node. Assume the current position 
// is nonempty initially.
template <class keyType, class dataType>
void List<keyType, dataType>::advance()
{   
	prev = cursor;
	cursor = cursor->next;
} 

// to make the current node the tail node; 
// if list is empty, the current position is still empty
template <class keyType, class dataType>
void List<keyType, dataType>::toEnd() 
{	
	toFirst();
	if (! listIsEmpty())
		while ( cursor->next != NULL) advance();   
}

// to return True if the current node is the tail node or 
// if the list and the current position are both empty.
template <class keyType, class dataType>
bool List<keyType, dataType>::atEnd() const
{    
	if ( listIsEmpty()) return true;
		else if (curIsEmpty()) return false;
			else return (cursor->next == NULL);
}

// to return the size of the list
template <class keyType, class dataType>
int List<keyType, dataType>::listSize() const
{	
	NodePointer q; 	int count;
	q = head;	count = 0;	
	while (q != NULL)
	{	
		count++; 	q = q->next;	
	} 
	return count;	
}

// to update the data portion of the current node to contain el; 
// assume the current position is nonempty.
template <class keyType, class dataType>
void List<keyType, dataType>::updateData(const dataType &d)
{
	cursor->data = d; 
}

// to return the data in the current node; 
// assume the current position is nonempty.
template <class keyType, class dataType>
void List<keyType, dataType>::retrieveData(dataType &d) const
{	
	d = cursor->data;  
}

// insert a node with data (el) at the head of the list; 
// the new node becomes the current node.
template <class keyType, class dataType>
void List<keyType, dataType>::insertFirst(const keyType &k, const dataType &d )
{ 	
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;	
	pnew->next = head;  	
	head = pnew; 
	cursor = head;  		
	prev = NULL;  
}

// insert a node with data (el) after the current node 
// without changing the current position; 
// assume the current position is nonempty in a non-empty list.
template <class keyType, class dataType>
void List<keyType, dataType>::insertAfter(const keyType &k, const dataType &d )
{	
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;	
	pnew->next = cursor->next;
 	cursor->next = pnew;   
}

// insert a node with data (el) before the current node,
// current position becomes the new node.
template <class keyType, class dataType>
void List<keyType, dataType>::insertBefore(const keyType &k, const dataType &d )
{	
	NodePointer pnew;
	pnew = new node;
	pnew->key = k; pnew->data = d;	
	pnew->next = cursor;
    prev->next = pnew;
	cursor = pnew;
}

// insert a node with data (el) at the end of the list,
// current position becomes the new node.
template <class keyType, class dataType>
void List<keyType, dataType>::insertEnd(const keyType &k, const dataType &d )
{	
	if (listIsEmpty()) insertFirst(k,d);
	else {toEnd(); insertAfter(k,d); }
}

// delete the current node and set the current position to the next node; 
// if the current node is the last node initially, the current position becomes empty; 
// assume the current position is nonempty initially.
template <class keyType, class dataType>
void List<keyType, dataType>::deleteNode()
{
	NodePointer q;
   	if(! curIsEmpty())     
	{			// current node is not empty
		if (atFirst()) 	// delete head node
   		{	q = cursor; 
			cursor = cursor->next;	
			head = cursor;
      		delete q;   
		}
		
		else 		// delete non-head node
   		{	q = cursor;
			cursor = cursor->next;
			prev->next = cursor;
			delete q;    
		}
   }
}

// delete the first node and set the current position to the next node; 
// if it was initially the only node, the current position becomes empty; 
// assume the current position is nonempty initially.
template <class keyType, class dataType>
void List<keyType, dataType>::deleteFirst()
{
	if(! listIsEmpty()) {toFirst(); deleteNode();}
}

// delete the last node and set the current position to empty; 
// assume the current position is nonempty initially.
template <class keyType, class dataType>
void List<keyType, dataType>::deleteEnd()
{
	if(! listIsEmpty()) {toEnd(); deleteNode();}
}

// delete whole list
template <class keyType, class dataType>
void List<keyType, dataType>::makeListEmpty()
{
     toFirst(); 
     while (! listIsEmpty())
        deleteNode();
}

// search the list for the node with key part that matches (k). 
// If found, set cursor to the node and return True,
// else return false and the current position becomes empty.
template <class keyType, class dataType>
bool List<keyType, dataType>::search(const keyType &k) 
{	
	bool found = false;
  	toFirst();
	while ((! found) && (cursor != NULL)) 
		if (k == cursor->key)  found = true;
			else advance();
	return found;
}

// insert a node in a position that maintains an ascending 
// order of the key portion of the nodes.
template <class keyType, class dataType>
void List<keyType, dataType>::orderInsert(const keyType &k, const dataType &d)
{
	toFirst();
	while ((cursor != NULL) && (k > cursor->key))
		advance();
	if (prev == NULL)  insertFirst(k,d);
		else insertBefore(k,d);
}

// traverse list to print key and data fields
template <class keyType, class dataType>
void List<keyType, dataType>::traverse()
{
	toFirst();   
	while (! curIsEmpty())
	{
		cout << cursor->key << " " << cursor->data << endl;
		advance(); 
	}
}



