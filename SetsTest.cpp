// File: SetsTest.cpp
// Test of class Sets
#include <iostream>
using namespace std;
#include "Sets.h"


int main()  // Testing the Sets Class 
{			// Union and find
	int i;
	Sets s(16);
	s.dispSets();
	s.SimpleUnion(7,1); s.SimpleUnion(8,1); s.SimpleUnion(9,1);
	s.SimpleUnion(2,5); s.SimpleUnion(10,5);
	s.SimpleUnion(4,3); s.SimpleUnion(6,3);
	s.dispSets();
	i = 1;
	cout << "parent set of " << i << " is " << s.SimpleFind(i) <<"\n";
	i = 4;
	cout << "parent set of " << i << " is " << s.SimpleFind(i) <<"\n";
	i = 10;
	cout << "parent set of " << i << " is " << s.SimpleFind(i) <<"\n";  
	s.SimpleUnion(5,1); 
	s.dispSets();
	i = 10;
	cout << "parent set of " << i << " is " << s.SimpleFind(i) <<"\n";


	return 0;
}

