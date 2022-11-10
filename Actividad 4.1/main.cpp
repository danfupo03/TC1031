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
// @complexity O(n^2)
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

	file >> n >> m;

	UMatrixGraph<int> umg(n);
	UListGraph<int> ulg(n);

	loadGraph(n, m, umg, ulg, file);

	file.close();

	std::cout << "---Matrix Graph---" << std::endl;
	std::cout << umg.toString();
	std::cout << "---List Graph---" << std::endl;
	std::cout << ulg.toString();

	std::cout << "DFS" << std::endl;
	dfs(2, &umg);
	std::cout << "\n";
	
	std::cout << "\nBFS" << std::endl;
	bfs(2, &ulg);
	std::cout << "\n";

	return 0;

}
