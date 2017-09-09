// File: SimpleTableAppl.cpp
// Applies SimpleTable Class

#include <iostream>
#include <string>
using namespace std;
#include "SimpleTable.h"


// Function to remove an element from a copy of the table (object
// passed by value, original remains unchanged)
template <class elType>
void remove(SimpleTable<elType> T, elType e);

// Function to display table contents (object passed by value).
template <class elType> 
void traverse(SimpleTable<elType> T);

int main()
{
	
	SimpleTable<char> T1;
	string s;
	int i;
	bool found;
	char e;
	
	
	// Read a string and display it
	cout << "Enter a string:" << endl;
	getline(cin,s);
	cout << s << endl;

	// Insert string characters in table T1 without duplicates
	for (i = 0; i < s.length(); i++)
	{
		e = toupper(s.at(i));
		found = T1.searchTable(e);
		if (!found) T1.insertEnd(e);	// insert only if it is not in table
	}

	// Display table contents and size
	cout << "Unique Elements: " << endl;
	traverse(T1);
	cout << "Table Size = " << T1.tableSize() << endl;

	// remove last character in the string from table copy
	e = toupper(s.at(s.length()-1));
	remove (T1,e);	// will also display the copy after removal
	
	// Original table remains unchanged
	cout << "Original table: " << endl;
	traverse(T1);
	cout << "Table Size = " << T1.tableSize() << endl;

	
	return 0;
}


// traverse Tabel to print data
template <class elType> 
void traverse(SimpleTable<elType> T)
{
	int i = 0;   
	while (i < T.tableSize())
	{
		cout << T.at(i) << " " ;
		i++; 
	}
	cout << endl;
}

// remove (e) from copy and display copy and its size after removal
template <class elType> 
void remove(SimpleTable<elType> T, elType e)
{
	if (T.searchTable(e)) T.deleteCurrent();
	cout << "Copy of the table missing one element:" << endl;
	traverse(T);
	cout << "Copy Table Size = " << T.tableSize() << endl;
}