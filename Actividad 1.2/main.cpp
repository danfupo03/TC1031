// =================================================================
//
// File: main.cpp
// Author: Daniel Emilio Fuentes Portaluppi
// Date: 02/09/22
//
// =================================================================
#include <iostream>
#include <fstream>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {
	
	ifstream inputFile;
    ofstream outputFile;

	if (argc != 3){
		cout << "usage: " << argv[0] << " input_file output_file\n";
    return -1;
  	}

	inputFile.open(argv[1]);
	if (!inputFile.is_open()){
		cout << argv[0] << ": File \"" << argv[1] << "\" not found\n";
    return -1;
	}

	outputFile.open(argv[2]);

	//inputFile.open("input1.txt");
	//outputFile.open("output1.txt");
	int n1, n2, num;
    inputFile >> n1;

	// Vector donde se van a almacenar nuestros numeros
    vector<int> vecNums(n1);
	
	// Aquí se leen nuestros números
    for (int i = 0; i < n1; i++) {
		inputFile >> num;
        vecNums[i] = num;
    }

	// Los diferentes algoritmos de ordenamiento que vamos a utilizar
	int bubbleComp, selectionComp, insertionComp;

	vector<int> tidy = vecNums;
	bubbleComp = bubbleSort(tidy);
	tidy = vecNums;
	selectionComp = selectionSort(tidy);
	tidy = vecNums;
	insertionComp = insertionSort(tidy);

	outputFile << bubbleComp << ' ' 
			   << selectionComp << ' ' 
			   << insertionComp << '\n' << '\n';


	inputFile >> n2;
	std::pair<int, int> result;
 	for (int i = 0; i < n2; i++) {
		inputFile >> num;
		result = sequentialSearch(tidy, num);
		outputFile << result.first << ' '
				   << result.second << ' ';
		result = binarySearch(tidy, num);
		outputFile << result.second << '\n';
    } 

	inputFile.close();
	outputFile.close();
}
