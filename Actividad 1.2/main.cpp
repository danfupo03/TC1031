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
	int n1, n2, num; //Asignamos variables para leer nuestros archivos
    inputFile >> n1; //Leemos la primer línea del input y asignamos el valor a la variable n1

	// Establecemos vector donde se van a almacenar nuestros numeros
    vector<int> vecNums(n1);
	
	// Aquí se leen nuestros números (segunda línea del input)
    for (int i = 0; i < n1; i++) {
		inputFile >> num; //Se lee cada numero de la linea y se asigna a la variable num
        vecNums[i] = num; //Se asigna el valor de num al vector
    }

	// Los diferentes algoritmos de ordenamiento que vamos a utilizar
	int bubbleComp, selectionComp, insertionComp;

	//Creamos un nuevo vector con el que vamos a ordenar
	vector<int> tidy = vecNums;

	//Ordenamos con método burbuja
	bubbleComp = bubbleSort(tidy);
	//Volvemos al vector desordenado
	tidy = vecNums;
	//Ordenamos con método de selección
	selectionComp = selectionSort(tidy);
	//Volvemos al vector desordenado
	tidy = vecNums;
	//Ordenamos con método de inserción
	insertionComp = insertionSort(tidy);

	//Imprimimos en el output
	outputFile << bubbleComp << ' ' << selectionComp << ' ' << insertionComp << '\n' << '\n';

	//Leemos la tercera línea del input, que indica la cantidad de numeros a buscar
	inputFile >> n2;
	std::pair<int, int> result;
	
	//Comenzamos con la búsqueda de nuestros números 
 	for (int i = 0; i < n2; i++) {
		inputFile >> num;
		result = sequentialSearch(tidy, num);
		outputFile << result.first << ' ' << result.second << ' ';
		result = binarySearch(tidy, num);
		outputFile << result.second << '\n';
    } 

	inputFile.close();
	outputFile.close();
}
