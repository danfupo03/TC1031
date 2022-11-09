/*
 * main.cpp
 *
 *  Created on: 3/11/2018
 *      Author: pperezm
 */
#include <iostream>
#include <fstream>
#include <cstring>
#include "ugraph.h"

int main(int argc, char* argv[]) {

	int n, m;
	std::ifstream input;
	input.open("input1.txt");
	input >> n >> m;

	/***********************************************************/
	/************************ UMatrixGraph *********************/
	/***********************************************************/
	
	UMatrixGraph<char> umg(n, false);

	umg.loadGraph(n, m, input);
	std::cout << umg.toString();

	std::set<char> edges = umg.getConnectionFrom('b');
	std::set<char>::iterator itr;
	
	std::cout << "b ->\t";
	for (itr = edges.begin(); itr != edges.end(); itr++) {
		std::cout << (*itr) << "\t";
	}
	std::cout << "\n\n";
	
	std::cout << "DFS(b) ->\t";
	edges = dfs('b', &umg);
	for (itr = edges.begin(); itr != edges.end(); itr++) {
		std::cout << (*itr) << "\t";
	}
	std::cout << "\n\n";
	
	std::cout << "BFS(b) ->\t";
	edges = bfs('b', &umg);
	for (itr = edges.begin(); itr != edges.end(); itr++) {
		std::cout << (*itr) << "\t";
	}
	std::cout << "\n\n";

	/***********************************************************/
	/************************ UListGraph ***********************/
	/***********************************************************/

	UListGraph<char> ulg(n);

	ulg.loadGraph(n, m, input);
	std::cout << ulg.toString();
}
