// File: Ktable.h
// Definition of Ktable Template Class

#ifndef KTABLE_H
#define KTABLE_H

// Specification of the class

template <class keyType, class dataType>

class Ktable
{
  public:

	// Member Functions
	Ktable(int nelements = 128);	// Constructor
	~Ktable();						// Destructor

	// Functions Prototype Definitions

	void emptyTable(const keyType & );
	bool tableIsEmpty() const;
	bool tableIsFull() const;
	int  occupancy() const;
	void updateData(const dataType & ); 
	void retrieveData(dataType &) const;
	void deleteCurrent();
	bool search(const keyType & ); 
	bool orderInsert(const keyType &, const dataType & );
	void traverse() const;
	
  private:
	  // Element Class
	   class element
	   {
		public:
			keyType key; 		// key 
			dataType data;		// Data
	   }; // end of class element declaration

	element *T;						// Pointer to Storage Array
	int p;							// Pointer to current element
	int MaxSize, csize;				// Maximum and Current Sizes
	keyType Empty;					// Empty symbol
};
#endif // KTABLE_H
#include "Ktable.cpp"