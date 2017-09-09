// File: Rational.cpp
// Rational class implementation

#include "rational.h"
#include <iostream>
using namespace std;

// Member functions
// Constructors
rational::rational()
{
   num = 0;
   denom = 0;
}

rational::rational(int n)
{
   num = n;
   denom = 1;
}

rational::rational(int n, int d)
{
   num = n;
   denom = d;
}

// Set numerator and denominator
void rational::setNum(int n)
{
   num = n;
}

void rational::setDenom(int d)
{
   denom = d;
}
// Multiply fractions
rational rational::multiply(const rational &f)
{
   rational temp(num * f.num, denom * f.denom);
   return temp;
}

// Divide fractions
rational rational::divide(const rational &f)
{
   rational temp(num * f.denom, denom * f.num);
   return temp;
}

// Add fractions
rational rational::add(const rational &f)
{
   rational temp(num * f.denom + f.num * denom,
                 denom * f.denom);
   return temp;
}

// Subtract Fractions
rational rational::subtract(const rational &f) {
   rational temp(num * f.denom - f.num * denom,
                 denom * f.denom);
   return temp;
}

// Read a fraction
void rational::readRational()
{
   char slash;       // storage for /
   do
   {
      cout << "Enter numerator / denominator: ";
      cin >> num >> slash >> denom;
   }
   while (slash != '/');
}

// Display a fraction
void rational::displayRational() const
{
   cout << num << '/' << denom;
}

// Reduce rational
rational rational::reduce() const
{
   int n,m,rem,gcd;

	// Get the two integers
	n = abs(num);  m = abs(denom);
	while (n > 0)
	{
		rem = m % n;
		m = n;
		n = rem;
	}
	gcd = m;
	rational g(num/gcd,	denom/gcd);
	return g;
}

// Accessors
int rational::getNum() const
{
   return num;
}

int rational::getDenom() const
{
   return denom;
}

rational rational::operator + (const rational &f2)   // IN: right-operand
{
   rational temp(num * f2.denom + f2.num * denom,
                 denom * f2.denom);
   return temp;
}

bool rational::operator == (const rational &f)
{
   return(num == f.num && denom == f.denom);
}



