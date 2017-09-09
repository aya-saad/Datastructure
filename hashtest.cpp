// File: hashtest.cpp
// Test class template hashTable
#include <iostream>
using namespace std;
#include "hashTable.h"

int main()
{
	const int N = 9;
	int A[N] = {55,35,66,76,59,48,84,70,54};
	int B[N] = {1,2,3,4,5,6,7,8,9};
	int e = -1;
	int x,d;
	hashTable<int, int> HT;
	cout << "Constructing empty Hash Table\n";
	HT.emptyTable(e);
	cout << "Table " << (HT.tableIsEmpty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	HT.traverse();
	for(int i = 0; i<N; i++)
			if(HT.insert(A[i], B[i])) cout << A[i] <<" is inserted, occupancy = "
				<< HT.occupancy() << endl;
	
	cout << "Table " << (HT.tableIsEmpty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	HT.traverse();
	cout << "Searching\n";
	x = A[2];
	cout << x << (HT.search(x) ? " is" : " is not") << " found\n";
	cout << "Retrieving data part of " << x; 
	HT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	cout << "Updating\n";
	HT.updateData(99);
	cout << "Retrieving data part of " << x; 
	HT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	x = 123;
	cout << x << (HT.search(x) ? " is" : " is not") << " found\n";
	x = 70;
	cout << "Searching\n";
	cout << x << (HT.search(x) ? " is" : " is not") << " found\n";
	cout << "Retrieving data part of " << x; 
	HT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	cout << "Traversing\n";
	HT.traverse();
	x = 44;
	if(HT.insert(x, 10)) cout << x <<" is inserted, occupancy = "
				<< HT.occupancy() << endl;
	cout << "Traversing\n";
	HT.traverse();
	return 0;
}

