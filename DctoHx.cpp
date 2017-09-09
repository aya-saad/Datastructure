// File: DctoHx.cpp
// Applies Stack template Class to convert from
// Decimal to Hexadecimal
#include <iostream>
using namespace std;
#include "Stackt.h"


int main()  
{	
	int n,rem; char c;
	Stackt<char> s;

	cout<<"Enter an integer number in decimal: "; cin>> n;
	do
	{	rem = n % 16;	n = n / 16;
		if (rem < 10) c = char(int('0') + rem);
			else  c = char(int('A') + rem - 10);
		s.push(c);
	}while ( n != 0);
	cout<< "In Hexadecimal it is: "; 
	while(!s.stackIsEmpty()){s.pop(c); cout << c;}
	cout<< endl;
	return 0;
}

