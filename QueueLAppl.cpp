// File: QueueLAppl.cpp
// Applies Linked List Queue Class to a string
#include <iostream>
#include <string>
using namespace std;
#include "QueueL.h"


int main()
{
	QueueL<char> q;
	string instring, outstring;
	char c;
	int i;
	cout << q.queueLength() << endl;
	// Read a string
	cout << "Enter a string:" << endl;
	getline(cin,instring);
	cout << instring << endl;
	outstring = "";
	for (i = 0; i < instring.length(); i++)
	{
		c = instring.at(i);
		q.enqueue(toupper(c));
	}
	cout << q.queueLength() << endl;
	while(!q.queueIsEmpty()) 
	{
		q.dequeue(c); 
		outstring = outstring + c;
	}
	cout << outstring << endl;
	cout << q.queueLength() << endl;

	return 0;
}