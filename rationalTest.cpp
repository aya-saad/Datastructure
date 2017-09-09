// File: RationalTest.cpp
// Tests the rational class

#include <iostream>
#include "rational.h"
#include "rational.cpp"
using namespace std;

int main()
{
	rational f1, f2;
	rational f3;

	// Read two rational numbers
	cout << "Enter 1st fraction:" << endl;
	f1.readRational();
	cout << "Enter 2nd fraction:" << endl;
	f2.readRational();

	// Fraction Arithmetic

	f3 = f1.multiply(f2);
	f1.displayRational(); cout << " * ";
	f2.displayRational(); cout << " = ";
	f3.displayRational(); 
	cout << " = ";
	f3 = f3.reduce();
	f3.displayRational(); cout << endl;


	f3 = f1.divide(f2);
	f1.displayRational(); cout << " / ";
	f2.displayRational(); cout << " = ";
	f3.displayRational(); 
	cout << " = ";
	f3 = f3.reduce();
	f3.displayRational(); cout << endl;


	f3 = f1.add(f2);
	f1.displayRational(); cout << " + ";
	f2.displayRational(); cout << " = ";
	f3.displayRational(); 
	cout << " = ";
	f3 = f3.reduce();
	f3.displayRational(); cout << endl;


	f3 = f1 + f2;
	f1.displayRational(); cout << " + ";
	f2.displayRational(); cout << " = ";
	f3.displayRational(); 
	cout << " = ";
	f3 = f3.reduce();
	f3.displayRational(); cout << endl;


	f3 = f1.subtract(f2);
	f1.displayRational(); cout << " - ";
	f2.displayRational(); cout << " = ";
	f3.displayRational(); 
	cout << " = ";
	f3 = f3.reduce();
	f3.displayRational(); cout << endl;


	return 0;

}