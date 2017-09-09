// File:Ktable.cpp
// Ktable Class implementation file

#include <iostream>
using namespace std;

// Constructor with argument, 
// size is nelements, default is 128
template <class keyType, class dataType>
Ktable<keyType, dataType>::Ktable(int nelements)   
{  MaxSize = nelements; T = new element[MaxSize];  
	p = -1; csize = 0; }  

// Destructor
template <class keyType, class dataType>
Ktable<keyType, dataType>::~Ktable()
{ delete [] T; }

// Empty whole Table
template <class keyType, class dataType>
void Ktable<keyType, dataType>::emptyTable(const keyType &k)
{
    Empty = k;
	for(int i=0; i < MaxSize; i++) T[i].key = Empty;
	p = -1;	csize = 0;
}

// return True if table is empty
template <class keyType, class dataType>
bool Ktable<keyType, dataType>::tableIsEmpty() const
{
	return (csize == 0);
}

// return True if table is full
template <class keyType, class dataType>
bool Ktable<keyType, dataType>::tableIsFull() const
{
	return (csize == MaxSize);
}

// to return the current occupancy of the table
template <class keyType, class dataType>
int Ktable<keyType, dataType>::occupancy() const
{	
	return csize;	
}

// to update the data in the current position 
template <class keyType, class dataType>
void Ktable<keyType, dataType>::updateData(const dataType &d)
{
	if ((p >= 0)&&(p < csize))T[p].data = d;
}

// Retrieve the data part of the current position
template <class keyType, class dataType>
void Ktable<keyType, dataType>::retrieveData(dataType &d) const
{	
	d = T[p].data; 
}


// delete the current element
template <class keyType, class dataType>
void Ktable<keyType, dataType>::deleteCurrent()
{
	if(!tableIsEmpty()) 
		{
			for(int i=p+1; i<csize; i++)
				{T[i-1] = T[i]; }
			csize--;
			T[csize].key = Empty; 
		}
}


// search the table for the slot with key part that matches (k). 
// If found, set p to the slot and return True,
// else return false 
template <class keyType, class dataType>
bool Ktable<keyType, dataType>::search(const keyType &k) 
{	
	bool found = false;
  	if(!tableIsEmpty()) 
	{
		p = 0;
		while ((! found) && (p < csize)) 
			if (k == T[p].key)  found = true;
				else p++;	

	}
	return found;
}

// insert element in a position that maintains an ascending 
// order of the key
template <class keyType, class dataType>
bool Ktable<keyType, dataType>::orderInsert(const keyType &k, const dataType &d)
{
	if (!tableIsFull())
	{
		p = csize;
		while((p > 0) && (T[p-1].key > k)) 
			{ T[p] = T[p-1]; p--;}
		T[p].key = k;  T[p].data = d; csize++;
		return true ;
	}
	else return false;

}



// traverse table to print key and data fields
template <class keyType, class dataType>
void Ktable<keyType, dataType>::traverse() const
{
	for(int i = 0; i < csize; i++) 
		cout << T[i].key << " " << T[i].data << endl;
}



