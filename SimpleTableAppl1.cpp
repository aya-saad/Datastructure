// File: SimpleTableAppl.cpp
// Applies SimpleTable Class

#include <iostream>
#include <string>
using namespace std;
#include "SimpleTable.h"




// Function to display table contents (object passed by value).
template <class elType> 
void traverse(SimpleTable<elType> T);

int main()
{
	
	SimpleTable<char> T1;
	SimpleTable<int> T3;
	string s;
	int i;
	bool found;
	char e;
	
	
	// Read a string 
	cout << "Enter a string:" << endl;
	getline(cin,s);
	
	// Insert string characters in table T1 without duplicates
	for (i = 0; i < s.length(); i++)
	{
		e = toupper(s.at(i));
		found = T1.searchTable(e);
		if (!found) T1.insertEnd(e);	// insert only if it is not in table
	}

	// Display table contents and size
	cout << "T1: table of unique characters: " << endl;
	traverse(T1);
	cout << "Table Size = " << T1.tableSize() << endl << endl;
	
	// initialize T2 to T1
	SimpleTable<char> T2 = T1;
	
	// Display contents of T2
	cout << "T2: a copy of T1 " << endl;
	traverse(T2);
	cout << "Table Size = " << T2.tableSize() << endl<<endl;
	
	// Insert integers in T3
	for (i = 1; i < 6; i++)	T3.insertEnd(100*i);	

	// Display contents of T3
	cout << "T3: A Table of integers: " << endl;
	traverse(T3);
	cout << "Table Size = " << T3.tableSize() << endl<< endl;

	
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

