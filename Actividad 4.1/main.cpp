// =================================================================
//
// File: main.cpp
// Authors: Daniel Emilio Fuentes Portaluppi - A01708302
// 
// Date: 09/11/22
//
// =================================================================
#include <iostream>
#include <fstream>
#include <cstring>
#include "ugraph.h"

// =================================================================
// Loads the arcs of the graph and store them in an Adjacency Matrix 
// and an Adjacency List
//
// @param number of nodes, number of arcs, adjacency matrix, adjacency list 
// & input file
// @return void
// @complexity O(n)
// =================================================================
template <class Vertex>
void loadGraph(int n, int m, UMatrixGraph<Vertex> &umg, UListGraph<Vertex> &ulg, std::ifstream &file) {
	int f, t;
	for(int i = 0; i < m; i++) {
		file >> f >> t;
		umg.addEdge(f, t);
		ulg.addEdge(f, t);
	}
}

int main(int argc, char *argv[])
{
	if(argc != 2) {
		return -1;
	}

	std::ifstream file(argv[1]);

	if(!file.is_open()) {
		std::cout << "Error: File not found" << std::endl;
		return 1;
	}

	int n, m;

	file >> n >> m; // n = number of nodes, m = number of arcs

	UMatrixGraph<int> umg(n);
	UListGraph<int> ulg(n);

	loadGraph(n, m, umg, ulg, file);

	file.close();

	//Print the Adjacency Matrix
	std::cout << "---Matrix Graph---" << std::endl;
	std::cout << umg.toString();
	//Print the Adjacency List
	std::cout << "---List Graph---" << std::endl;
	std::cout << ulg.toString();

	//DFS implementation
	std::cout << "DFS" << std::endl;
	dfs(8, &umg);
	std::cout << "\n";
	
	//BFS implementation
	std::cout << "\nBFS" << std::endl;
	bfs(8, &ulg);
	std::cout << "\n";

	return 0;

}
