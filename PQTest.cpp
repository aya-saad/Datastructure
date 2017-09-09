// FILE: HeapSortTest.cpp
// Heap Sorting of a random sequence of integers.
#include "PQ.h"
#include <time.h>
#include <conio.h>
#include <iostream>
using namespace std;

// ______________________________Globals __________________
const int Nmax = 200;		// Maximum number of elements

// Functions Prototype Definitions_________________________

// Swap element[i] with element[k]
void swap(int &, int &);
// Generate a random integer from (i) to (j)
int  RandInt(int i,int j);
// Generate a random permutaion of the first N integers			
void RandPerm(int X[], int N);
// Heapsort array X[] locations 1..N 		
void heapsort(int X[], int N);		

//__________________________________________________________

int main()
{
	int X[Nmax+1];	// Array of random permutation of integers
	int i,N;
	cout<<"Input N: "; cin >> N;
	srand((unsigned)time(NULL));
	RandPerm(X,N);
	for(i=1; i<=N; i++) cout<<X[i] <<" ";
	cout<<endl;
	heapsort(X,N);
	for(i=1; i<=N; i++) cout<<X[i] <<" ";
	cout<<endl;
	_getch();
	return 0;
}

//Implementation of Functions________________________________
void swap(int &a, int &b)
{
	int t;
	t = a; a = b; b = t;
}

//____________________________________________________________
int RandInt(int i,int j) 					
{
	return (rand()%(j-i+1) + i);
}
//____________________________________________________________
void RandPerm(int X[], int s) 				
{
	int i,k;
	for(i=1;i<=s;i++) X[i] = i;
	for(i=2;i<=s;i++)
	{
		k = RandInt(1,i);
		swap(X[i],X[k]);
	}
}

//______________________________________________________________
void heapsort(int X[], int N) 	
{
	int i;
	PQ<int> Heap(N);
	for (i = 1; i <= N; i++) Heap.insert(X[i]);
	for (i = 1; i <= N; i++) X[i] = Heap.remove(); 
}
