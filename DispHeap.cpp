// File:dispheap.cpp
// Display Heap Array in Tree Form

#include <iostream>
#include <conio.h>
#include "PQ.h"
using namespace std;

int main()
{
	int e;
	int x[8] = {8,2,4,6,5,3,1,7} ;
	PQ<int> Heap(16);
	for (int i = 0; i < 8; i++) 
	{
		cout << "Inserting " << x[i] << endl;
		Heap.insert(x[i]);
		Heap.dispHeap();
		_getch();
	}
	cout <<"\n\n\n";
	for (i = 0; i < 8; i++) 
	{
		e = Heap.remove();
		cout << "Removing " << e << endl;
		Heap.dispHeap();
		_getch();
	}
	return 0;
}


