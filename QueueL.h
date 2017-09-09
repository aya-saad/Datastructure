// File: QueueL.h
// Linked List Queue class definition
#ifndef QUEUEL_H           
#define QUEUEL_H           

template <class Type>

class QueueL
{
   public:

	  
      QueueL();						// Constructor
	  ~QueueL();					// Destructor	
      void enqueue(Type );			// Add to rear
	  void dequeue(Type &);			// Remove from front
	  void queueFront(Type &) const;	// retrieve front
      bool queueIsEmpty() const;	// Test for Empty queue
	  int  queueLength() const;		// Queue Length
      
   private:
	// Node Class
	   class node
	   {
		public:
			Type e;					// queue element
			node *next;				// pointer to next node	       
		}; // end of class node declaration

	typedef node * NodePointer;
	
	NodePointer front , rear;		// Pointers
	int count;						// length
	
}; 

#endif // QUEUEL_H
#include "QueueL.cpp"

