
// File simpleString.h
// Simple string class definition

#ifndef SIMPLESTRING_H
#define SIMPLESTRING_H

class simpleString
{
    public:
      // Member Functions
      // constructors
      simpleString();
	  simpleString(int );

	  // Destructor
	  ~simpleString();

	  // Function Prototype definition
	  // Read a simple string
      void readString();
  
      // Display a simple string
      void writeString() const;
  
      // Retrieve the character at a specified position
      // Returns the character \0 if position is out of bounds
      char at(int) const;

	  // Return the string length
      int getLength() const;
  
      // Return the string capacity
      int getCapacity() const;

      void getContents(char[]) const;

	private:
      // Data members (attributes)
	  // maximum size
	  int capacity;
	  // pointer to storage array
      char *s;
	  // current length
      int length; 
};
  
#endif //SIMPLESTRING_H