// File: StackLAppl.cpp
// Applies Linked List Stack Class to reverse a string
#include <iostream>
#include <string>
using namespace std;
#include "StackL.h"


int main()
{
	
	StackL<char> s;
	string instring, outstring;
	char c;
	int i;
		
	// Read a string
	cout << "Enter a string:" << endl;
	getline(cin,instring);
	cout << instring << endl;
	outstring = "";
	for (i = 0; i < instring.length(); i++)
	{
		c = instring.at(i);
		s.push(c);
	}
	while(!s.stackIsEmpty()) 
	{
		s.pop(c); 
		outstring = outstring + c;
	}
	cout << outstring << endl;
	s.~StackL();
	return 0;
}