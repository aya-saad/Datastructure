// File: KtableTest2.cpp
// Test class template Ktable
#include <iostream>
using namespace std;
#include "Ktable.h"

int main()
{
	const int N = 9;
	int A[N] = {55,35,66,76,59,48,84,70,54};
	int B[N] = {1,2,3,4,5,6,7,8,9};
	int e = 1111;
	int x,d;
	Ktable<int, int> KT;
	cout << "Constructing empty Key Table\n";
	KT.emptyTable(e);
	cout << "Table " << (KT.tableIsEmpty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	KT.traverse();
	for(int i = 0; i<N; i++)
			if(KT.orderInsert(A[i], B[i])) cout << A[i] <<" is inserted, occupancy = "
				<< KT.occupancy() << endl;
	
	cout << "Table " << (KT.tableIsEmpty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	KT.traverse();
	cout << "Searching\n";
	x = A[2];
	cout << x << (KT.search(x) ? " is" : " is not") << " found\n";
	cout << "Retrieving data part of " << x; 
	KT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	cout << "Updating\n";
	KT.updateData(99);
	cout << "Retrieving data part of " << x; 
	KT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	x = 123;
	cout << x << (KT.search(x) ? " is" : " is not") << " found\n";
	x = 70;
	cout << "Searching\n";
	cout << x << (KT.search(x) ? " is" : " is not") << " found\n";
	cout << "Retrieving data part of " << x; 
	KT.retrieveData(d);  cout <<" = " << d; 
	cout << endl;
	cout << "Traversing\n";
	KT.traverse();
	x = 44;
	if(KT.orderInsert(x, 10)) cout << x <<" is inserted, occupancy = "
				<< KT.occupancy() << endl;
	cout << "Traversing\n";
	KT.traverse();
	return 0;
}

