// File: KTabletest.cpp
// Applies Ktable Class

#include <iostream>
#include <string>
using namespace std;
#include "Ktable.h"


int main()
{
	
	Ktable<char , int> ctable;
	string s;
	char c , key;
	int i;
	bool keyfound;
	int info;
	
	
	
	// Read a string
	cout << "Enter a string:" << endl;
	getline(cin,s);
	cout << s << endl;
	ctable.emptyTable(char(126));
	for (i = 0; i < s.length(); i++)
	{
		c = toupper(s.at(i)); key = c;
		keyfound = ctable.search(key);
		if (keyfound) 
		{
			ctable.retrieveData(info);
			info++; 
			ctable.updateData(info);
		}
		else if(ctable.orderInsert(key,1)) 
		{
			cout << key << " is inserted\n";
			ctable.traverse();
		}
	}

	ctable.traverse();
	cout << ctable.occupancy() << endl;
	ctable.emptyTable(char(126)); 
	cout << ctable.occupancy() << endl;

	
	return 0;
}