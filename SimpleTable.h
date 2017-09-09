// File: SimpleTable.h
// SimpleTable Class header file
// Structure:     A SimpleTable consists of a collection of elements
//                that are all of the same type, elType.
//                The elements are not ordered. New elements
//                are inserted at the end of the table. A dynamic array 
//                for MaxSize elements is allocated, default is 128.
//				  Main operations are insert, delete and search

#ifndef SIMPLETABLE_H
#define SIMPLETABLE_H

template <class elType>

class SimpleTable
{
  public:
	    
    SimpleTable(int nelements = 128);	// Constructor
	SimpleTable(const SimpleTable<elType> &);	// Copy Constructor
	~SimpleTable();						// Destructor
	// Member Functions
	bool tableIsEmpty();
	bool tableIsFull();
	int  tableSize();
	void insertEnd(elType );
	bool searchTable(elType ); 
	void deleteCurrent();
    elType at(int ) const;
	
  private:

	elType *T;							// Pointer to Storage Array
	int p;								// Index to elements
	int MaxSize, csize;					// Maximum and Current Sizes
};
#endif // SIMPLETABLE_H
  
#include "SimpleTable.cpp"