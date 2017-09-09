// File: QueuetAppl.cpp
// Test if a string is a palindrome
#include <iostream>
#include <string>
using namespace std;
#include "Stackt.h"
#include "Queuet.h"
bool palindrome(string w);
int main()
{
	string w;  
	cout << "Enter a string:" << endl;
	getline(cin,w);  cout << w << endl;
	if (palindrome(w)) cout << "Palindrome" << endl;
		else cout << "NOT Palindrome" << endl;
	return 0;
}

bool palindrome(string w)
{
	Stackt<char> s;
	Queuet<char> q;
	int L = w.length();	char c,v;
	for (int i = 0; i < L; i++)
	{ c = w.at(i); s.push(c); q.enqueue(c); }
	while(!q.queueIsEmpty()) 
	{ q.dequeue(c); s.pop(v); if(c != v) return false; }
	return true;
}