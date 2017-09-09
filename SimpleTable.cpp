// File:SimpleTable.cpp
// SimpleTable Class implementation file


#include <iostream>
using namespace std;


// Constructor with argument, size is nelements, default is 128
template <class elType>
SimpleTable<elType>::SimpleTable(int nelements)   
{  MaxSize = nelements; T = new elType[MaxSize];  p = -1; csize = 0; }  

// Copy Constructor
template <class elType>
SimpleTable<elType>::SimpleTable(const SimpleTable<elType> &original)
:MaxSize(original.MaxSize), p(original.p), csize(original.csize)
{
	T = new elType[MaxSize];
	for (int i = 0; i < csize; i++) T[i] = original.T[i];
}

// Destructor
template <class elType>
SimpleTable<elType>::~SimpleTable()
{ delete [] T;}


// return True if table is empty
template <class elType>
bool SimpleTable<elType>::tableIsEmpty()
{
	return (csize == 0);
}

// return True if table is full
template <class elType>
bool SimpleTable<elType>::tableIsFull()
{
	return (csize == MaxSize);
}

// to return the current size of the table
template <class elType>
int SimpleTable<elType>::tableSize()
{	
	return csize;	
}


// insert data (el) at the end of the table
template <class elType>
void SimpleTable<elType>::insertEnd(elType el)
{	
	if (!tableIsFull())	
			{ T[csize] = el; csize++;}
}



// Search the table for the element that matches (k). 
// If found, return True, set current position to location
template <class elType>
bool SimpleTable<elType>::searchTable(elType k) 
{	
	bool found = false;
  	if(!tableIsEmpty()) 
	{
		p = 0;
		while ((! found) && (p < csize)) 
			if (k == T[p])  found = true;
				else p++;	

	}
	return found;
}

// delete the current element
template <class elType> 
void SimpleTable<elType>::deleteCurrent()
{
	int i;
	if(!tableIsEmpty()) 
		{
			if (p < csize-1)
				for(i=p; i<csize-1; i++) T[i] = T[i+1];
			csize--;
		}
}

// Retrieve the element at a specified position
template <class elType>
elType SimpleTable<elType>::at(int pos) const 
{
   return T[pos];
}



