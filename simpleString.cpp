// File simplestring.cpp
// Simple string class implementation

#include "simplestring.h"
#include <iostream>
using namespace std;

// Member Functions...
// constructors
// default constructor, capacity = 255
simpleString::simpleString()
{
    s = new char[255]; 	
	capacity = 255; length = 0; 
}

// Constructor with argument, capacity is mVal
simpleString::simpleString(int mVal)
{ 
	s = new char[mVal]; 	
	capacity = mVal; length = 0;
}

// Class Destructor
simpleString::~simpleString()
{ delete [] s;}
	

// Read a simple string
void simpleString::readString()
{
   // Local data...
   char next;              
   int pos = 0;            

   cin.get(next);         
   while ((next != '\n') && (pos < capacity))
   {
	  // Insert next in array contents
      s[pos] = next;
      pos++;
      cin.get(next);     
   }

   length = pos; 
}

// Write a simple string
void simpleString::writeString() const
{
   for (int pos = 0; pos < length; pos++)
      cout << s[pos];
}

// Retrieve the character at a specified position
// Returns the character \0 if position is out
// of bounds
char simpleString::at(int pos) const 
{
   // Local data
   const char nullcharacter = '\0';
   if ((pos < 0) || (pos >= length))
	{
		cerr << "position " <<	pos << " not defined." << endl;
		return nullcharacter;
	}
   else  return s[pos];
}

// Return the string length
int simpleString::getLength() const
{
   return length;
}

// Return the string capacity
int simpleString::getCapacity() const
{
   return capacity;
}
void simpleString::getContents(char str[]) const
{
   for (int i = 0; i < length; i++)
      str[i] = s[i];
}
