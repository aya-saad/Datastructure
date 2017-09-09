// File: BSTtest2.cpp
// Test class template binaryTree
#include <iostream>
using namespace std;
#include "binaryTree.h"

int main()
{
	const int N = 7;
	char A[N] = {'D','B','A','F','G','E','C'};
	int B[N] = {4,2,1,6,7,5,3};
	binaryTree<char, int> BST;
	cout << "Constructing empty BST\n";
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "In-Order Traversal\n";
	BST.traverse();
	for(int i = 0; i<N; i++)
			if(BST.insert(A[i], B[i])) cout << A[i] <<" is inserted\n";
	
	cout << "BST " << (BST.empty() ? "is" : "is not") << " empty\n";
	cout << "Graphical Output\n\n";
	BST.graph();
	cout << "In-Order Traversal\n";
	BST.traverse();
	cout << "Pre-Order Traversal\n";
	BST.preorder();
	cout << "Level-Order Traversal\n";
	BST.levelorder();

	
	return 0;
}

