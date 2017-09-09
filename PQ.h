// File: PQ.h
// Priority Queue header file (Minimum Heap)
/* ______________________________________________________________________________
The PQ is implemented as a minimum Heap. 
The elements of the heap are of type (E).
The top of the heap will contain the smallest element. 
The heap condition is that a parent is always 
less than or equal to the children. 
The heap is implemented as a dynamic array a[] with a 
size specified by the class constructor. 
Location a[0] is reserved for a value "itemMin" smaller 
than any possible value (e.g. a negative number)
_________________________________________________________________________________
*/

#ifndef PQ_H
#define PQ_H

template <class E>

class PQ
{
  public:

	// Class Constructor with input size parameter
	PQ(int );
	// Class Destructor
	~PQ();
	// Member Functions
	void insert(E );	// insert element into heap
	E remove();			// remove & return the top of the heap
	void dispHeap();	// Display Heap Array as a tree

   private:
	// Pointer to Storage Array
	E *a;
	// Maximum Size (not including a[0])
	int MaxSize;
	int N;					// index of last element in the array
	E itemMin;				// itemMin to be stored in a[0]
	// Heap Adjustment Functions
	void upheap(int k);
	void downheap(int k);
	void disp_Level (int Nrows, int level, int s, int e);

};
#endif // PQ_H
#include "PQ.cpp"

