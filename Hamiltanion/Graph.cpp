#include "stdafx.h"
#include "Graph.h"
#include"iostream"

using namespace std;

Graph::Graph()
{
	
}


Graph::~Graph()
{
	
}

bool Graph::isSafe(int v, bool graph[V][V], int path[], int pos)
{
	if (graph[path[pos - 1]][v] == 0) return false;

	for (int i = 0; i < pos; i++)
		if (path[i] == v) return false;

	return true;
}

bool Graph::Solve(bool graph[V][V], int path[], int pos)
{
	if (pos == V)   // Base case: If all vertices are included in Hamiltonian Cycle .
	{
		if (graph[path[pos - 1]][path[0]] == 1) return true;   // And if there is an edge from the last included vertex to the first vertex .


		else  return false;
	}

	for (int v = 0; v < V; v++)
	{
		if (isSafe(v, graph, path, pos))
		{
			path[pos] = v;

			if (Solve(graph, path, pos + 1) == true)  return true;    //Recrusive Function .

			path[pos] = -1;
		}
	}
	return false;
}

void Graph::print(int path[])
{
	cout << "Solution Exists : ";
	cout << " Following is one Hamiltonian Cycle \n";

	for (int i = 0; i < V; i++) cout << (path[i]) << " ";

	cout << path[0] << endl; // To Print the Vertex again .
}

bool Graph::Cycle(bool graph[V][V])
{
	int *path = new int[V];
	for (int i = 0; i < V; i++)
		path[i] = -1;

	int StartingPoint = 0;

	cout << "Enter your starting point" << endl;
	cin >> StartingPoint;
	path[0] = StartingPoint;

	if (Solve(graph, path, 1) == false)
	{
		cout << "Solution does not exist";
		cout << endl;
		return false;
	}
	print(path);
	return true;
}


