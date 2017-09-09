// File: QueuetAppl2.cpp
// Passing a stack and a queue as reference parameters
#include <iostream>
#include <string>
using namespace std;
#include "Stackt.h"
#include "Queuet.h"
void fillqs(string ,Stackt<char> &,Queuet<char> &);
int main()
{
	string w;
	char c;
	Stackt<char> ST;
	Queuet<char> QU;
	cout << "Enter a string:" << endl;
	getline(cin,w);  cout << w << endl;
	fillqs(w,ST,QU);
	while(!ST.stackIsEmpty())
		{ ST.pop(c); cout << c; }
	cout<<endl;
	while(!QU.queueIsEmpty()) 
		{ QU.dequeue(c); cout << c; }
	cout<< endl;
	return 0;
}

void fillqs(string w,Stackt<char> &s,Queuet<char> &q)
{
	int L = w.length();	char c;
	for (int i = 0; i < L; i++)
	{ c = w.at(i); s.push(c); q.enqueue(c); }
}