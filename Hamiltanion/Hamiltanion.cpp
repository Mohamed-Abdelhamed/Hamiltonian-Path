// Hamiltanion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Graph.h"
#include"iostream"

using namespace std;




void main()
{
	Graph g;

	bool graph1[V][V] = // Hamiltianion .
	{
		{ 0, 1, 0, 1, 0 },
		{ 1, 0, 1, 1, 1 },
		{ 0, 1, 0, 0, 1 },
		{ 1, 1, 0, 0, 1 },
		{ 0, 1, 1, 1, 0 },
	};

	g.Cycle(graph1);

	bool graph2[V][V] = // Not Hamiltanion .
	{
		{ 0, 1, 0, 1, 0 },
		{ 1, 0, 1, 1, 1 },
		{ 0, 1, 0, 0, 1 },
		{ 1, 1, 0, 0, 0 },
		{ 0, 1, 1, 0, 0 },
	};

	g.Cycle(graph2);

	bool graph3[V][V] = // Not Hamiltanion .
	{
		{ 0, 1, 0, 0, 0 },
		{ 1, 0, 1, 1, 1 },
		{ 0, 1, 0, 0, 0 },
		{ 0, 1, 0, 0, 0 },
		{ 0, 1, 0, 0, 0 },
	};


	int CheckIfFound[] = { 1,2,3,4,5,6 };



	g.Cycle(graph3);
	//g.print(CheckIfFound);
}

