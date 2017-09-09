// File: StackL.h
// Linked List Stack class definition
#ifndef STACKL_H           
#define STACKL_H           

template <class Type>

class StackL
{
   public:
         
      StackL();						// Constructor
	  ~StackL();					// Destructor
      void push(Type );				// Push
	  void pop(Type &);				// Pop
	  void stackTop(Type &) const;	// retrieve top
      bool stackIsEmpty() const;	// Test for Empty stack
      
   private:
	
	// Node Class
	   class node
	   {
		public:
			Type e;					// stack element
			node *next;				// pointer to next node	       
		}; // end of class node declaration

	typedef node * NodePointer;

	NodePointer top;				// pointer to top
}; 
#endif // STACKL_H
#include "StackL.cpp"

