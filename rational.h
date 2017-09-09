// File: Rational.h
// Rational class definition

#ifndef RATIONAL_H			// used to avoid multiple definitions 
#define RATIONAL_H			//    not part of the class

class rational
{
   public:
	// Member functions
	// Constructors
	rational();			// Default Costructor
	rational(int);		// Initialize numerator with denom = 1
	rational(int, int);	// Initialize both numerator and denom.

	void setNum(int);	// Set numerator and denominator
	void setDenom(int);
	
	rational multiply(const rational &f);	// Multiply fractions
	rational divide(const rational &f);		// Divide fractions
	rational add(const rational &f);		// Add Fractions
	rational subtract(const rational &f);	// Subtract Fractions
	void readRational();					// Read a fraction
	void displayRational() const;			// Display a fraction
	rational reduce() const;				// Reduce rational

	// Accessors
	int getNum() const;
	int getDenom() const;

	// Operator Style
    rational operator + (const rational &); // Add object to parameter
    bool operator == (const rational &);	// Test equality of object and parameter

   private:
	// Data members (attributes)
	int num;	//  private data field
	int denom;	// private data field

};	// Note -- a class definition MUST end with a semicolon

#endif // RATIONAL_H
