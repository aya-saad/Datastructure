// File: simpleStringTest.cpp
// Tests the simple string class

#include "simpleString.h"
#include "simpleString.cpp"
#include <iostream>

using namespace std;

int main()
{
	simpleString S1;
	simpleString S2(20);

	cout << S1.getCapacity() <<" "<<S1.getLength() << endl;
	cout << S2.getCapacity() <<" "<<S2.getLength() << endl;

	// Read in a string.
	cout << "Enter a string and press RETURN: ";
	S1.readString();

   // Display the string just read.
   cout << "The string read was: ";
   S1.writeString();
   cout << endl;

   // Display each character on a separate line.
   cout << "The characters in the string follow:" << endl;
   for (int pos = 0; pos < S1.getLength(); pos++)
       cout << S1.at(pos) << endl;

   
   return 0;
}
