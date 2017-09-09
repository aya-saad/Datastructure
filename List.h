// File: List.h
// Definition of Simple Linked List Template Class

#ifndef LIST_H
#define LIST_H

// Specification of the class

template <class keyType, class dataType>

class List
{
	public:

	// Member Functions
	// Create an empty List
	List();
	// Destroy List
	~List();

	// Functions Prototype Definitions

	bool listIsEmpty() const; 
	bool curIsEmpty() const; 
	void toFirst(); 
	bool atFirst() const;
	void advance(); 
	void toEnd(); 
	bool atEnd() const;
	int  listSize() const;
	void updateData(const dataType & ); 
	void retrieveData(dataType &) const;
	void insertFirst(const keyType &, const dataType & ); 
	void insertAfter(const keyType &, const dataType & );
	void insertBefore(const keyType &, const dataType & );
	void insertEnd(const keyType &, const dataType & );
	void deleteNode();
	void deleteFirst();
	void deleteEnd();
	void makeListEmpty(); 
	bool search(const keyType & ); 
	void orderInsert(const keyType &, const dataType & );
	void traverse();

private:
	// Node Class
	   class node
	   {
		public:
			keyType key; 		// key 
			dataType data;		// Data
			node *next;			// pointer to next node	       
		}; // end of class node declaration

	   typedef node * NodePointer;

	// Pointers
	NodePointer head, cursor, prev;
};
#endif // LIST_H
#include "List.cpp"  
