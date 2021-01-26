#pragma once

#ifndef Graph_h
#define Graph_h

const int V = 5;

class Graph
{
public:
	Graph();
	~Graph();
	void print(int path[]);
	bool isSafe(int v, bool graph[V][V], int path[], int pos);
	bool Solve(bool graph[V][V], int path[], int pos);
	bool Cycle(bool graph[V][V]);
};

#endif
