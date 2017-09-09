// File: ListAppl.cpp
// Applies List Class: Ordered linked list

#include <iostream>
#include <string>
using namespace std;
#include "List.h"


int main()
{
	List<char, int> clist;
	string s;
	char c;
	int i, count;
	bool keyfound;
	
	// Read a string
	cout << "Enter a string:" << endl;
	getline(cin,s);
	cout << s << endl;
	for (i = 0; i < s.length(); i++)
	{
		c = toupper(s.at(i)); 
		keyfound = clist.search(c);
		if (keyfound) 
		{
			clist.retrieveData(count);
			count++; 
			clist.updateData(count);
		}
		else clist.orderInsert(c,1); 
	}

	clist.traverse();
	cout << clist.listSize() << endl;
	//clist.makeListEmpty(); 
	clist.~List();
	cout << clist.listSize() << endl;

	
	return 0;
}