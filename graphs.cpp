// FILE: graphs.cpp
// Graph Library Implementation File

#include <fstream>		// For reading file from disk
#include <iostream>
#include <string>		// For file name
#include <iomanip>
#include "MinHeap.h"	// Minimum Heap Class
#include "Sets.h"		// Disjoint Sets Class
#include "Edge.h"		// Deinition of an Edge

using namespace std;

// Constructor
Graphs::Graphs()
{
	E = V = order = 0;
}

// Destructor
Graphs::~Graphs()
{
}


// Map vertex number (0,1,2,..) to (A,B,C,..)
char Graphs::Vname(const int s) const
{
	return char(s+65);
}

// Get Graph from text File (file name is stored in string fname)
// Graph is stored in adjacency matrix, a copy is returned in A[][]
void Graphs::getGraph(string fname)		
{
   // Local data ...
	weightType wi;
	int i,m,r,c;
	ifstream source;

	source.open(fname.c_str()); 
	source >> V;	// Read no. of verices (V)
	m = V*V;		// Total Number of weights in file
	
	// Convert from a 1-D file of size m weights 
	// to a 2-D Adjacency Matrix of V rows and V columns
	for (i = 0; i < m; i++)
	{
		// get a weight from file
		// compute row(r) and column(c) 
		// put weight in adjacency matrix at [r][c]
	}
	// close file
	// Get graph edges
	
}

// Display Adjacency Matrix
void Graphs::dispGraph() const
{
	int i,j;
	cout<<"Adjacency Matrix\n";
	for(i=0; i<V; i++)
	{
		for(j=0; j<V; j++)
			cout<< setw(3)<< AdjMatrix[i][j] << " ";
		cout<< endl;
	}
}

// Get Non-Zero edges from adjacency matrix
// and store them in array edges[]. 
void Graphs::getEdges()			
{
	int r , c;
	int i = 0;
	weightType weight;

	// Only examin weights above the diagonal 
	for (r = 0; r <= V-2; r++)
		for (c = r+1; c <= V-1; c++)
		{
			weight = AdjMatrix[r][c];
			if (weight > 0)
			{
				// save (r,c,weight) in edges[i]
				edges[i].u = r;
				edges[i].v = c;
				edges[i].w = weight;
				i++;
			}
		}

	E = i;		// Number of non-zero edges
	
}

// Get number of vertices (V)	
int Graphs::No_of_Verices() const 				
{
	return V;
}

// Get Number of Non-zero edges (E)
int Graphs::No_of_Edges() const 					
{
	return E;
}

// Output an edge (e): Vertex names and weight
void Graphs::printEdge(Edge e) const 			
{
	cout << Vname(e.u) << " " << Vname(e.v) << " " << e.w << endl;
}

// Display Graph Edges
void Graphs::dispEdges() const
{
	cout<<"Graph Edges\n";
	for (int i = 0; i < E; i++) 
		printEdge(edges[i]);
}

// Shortest paths from node s
// uses Dijkstra's Algorithm
void Graphs::shPath(int s)
{
	// Implement the function here
}

// Print path (vertex names) from source (s) to destination (i)
void Graphs::printPath(int s, int i) const
{
	// Implement the function here
}

// Node Visit Function
void Graphs::visit(int k)
{ 
	// Implement the function here
}

// Depth First Search Traversal
void Graphs::DFS()									
{ 
	// Implement the function here
}

// Minimum Spanning Tree
void Graphs::MST()
{
	// Implement the function here
}