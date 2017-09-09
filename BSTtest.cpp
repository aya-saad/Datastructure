// File: BSTtest.cpp
// Test class template binaryTree
#include <iostream>
using namespace std;
#include "binaryTree.h"

int main()
{
	const int N = 7;
	char A[N] = {'D','B','A','F','G','E','C'};
	int B[N] = {4,2,1,6,7,5,3};
	char x; int d = 0;
	binaryTree<char, int> BST;
	cout << "Constructing empty BST\n";
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	BST.traverse();
	for(int i = 0; i<N; i++)
			if(BST.insert(A[i], B[i])) cout << A[i] <<" is inserted\n";
	
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "Traversing\n";
	BST.traverse();
	cout << "Searching\n";
	x = A[3];
	cout << x << (BST.search(x) ? " is" : " is not") << " found\n";
	x = 'W';
	cout << x << (BST.search(x) ? " is" : " is not") << " found\n";
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = 'E';
	cout << "Retrieving data part of " << x; 
	if (BST.retrieve(x, d)) cout <<" = " << d; 
	cout << endl;
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = 'F';
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	x = 'D';
	cout << "Removing " << x << endl;
	BST.remove(x);
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << endl;
	return 0;
}

