// File: StacktAppl.cpp
// Applies Stack template Class to reverse a string
#include <iostream>
#include <string>
using namespace std;
#include "Stackt.h"


int main()  // Testing he Stackt Class 
{			// Reverse a string and stack copy
	
	Stackt<char> s1;
	char c;
	string instring = "Testing Stack Class";
	string outstring = "";	cout << instring << endl;
	int L = instring.length();
	cout << "Pushing characters on s1\n";
	for (int i = 0; i < L; i++) s1.push(instring.at(i));
	cout << "Copying s1 to s2\n";
	Stackt<char> s2 = s1;
	cout << "Popping characters from s1\n";
	while(!s1.stackIsEmpty()) 
	{ s1.pop(c); outstring = outstring + c;}
	cout << outstring << endl;
	cout <<"s1 is now empty. Trying to pop from empty s1\n";
	s1.pop(c);
	cout << "Now popping contents of s2" << endl;
	while(!s2.stackIsEmpty()) 
	{ s2.pop(c); cout << c;	}
	cout<< endl;
	return 0;
}

