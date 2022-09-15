// =================================================================
//
// File: main.cpp
// Authors: Daniel Emilio Fuentes Portaluppi - A01708302
//          Ivan Ricardo Paredes Aviles - A01705083
// Date: 14/09/22
//
// =================================================================
#include <iostream>
#include <fstream>
#include <vector>
#include "ship.h"

using namespace std;

template <class T>
void swap(vector<T> &v, long i, long j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void bubble(vector<Ship> &v) {
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j + 1].older(v[j])){
				swap(v, j, j + 1);
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ifstream inputFile;
    ofstream outputFile;

    if (argc != 3){
        cout << "Uso: " << argv[0] << " Input.txt Output.txt";
        return -1;
    }

    inputFile.open(argv[1]);
    if (inputFile.fail()) {
        cout << "No se pudo abrir el archivo de entrada.";
        return -1;
    }

    outputFile.open(argv[2]);
    if (outputFile.fail()){
        cout << "No se pudo abrir el archivo de salida.";
        return -1;
    } 

	int amount;
	string find, date, time, UBI;
	char entry;

	inputFile >> amount >> find;

	vector<Ship> Ships(amount);

	for(int i = 0; i < amount; i++){
		inputFile >> date >> time >> entry >> UBI;
		Ships[i] = Ship(date, time, entry, UBI);
	}

	bubble(Ships);

	for (int i = 0; i < amount; i++)
		if(Ships[i].getUBI().substr(0,3) == find)
			outputFile << Ships[i] << '\n';
	return 0;
}