// =================================================================
//
// File: activity.h
// Author: Daniel Emilio Fuentes Portaluppi - A01708302
// Date: 26/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma = 0;

    for(int i=0;i<=n;i++){
        suma += i;
    }

    return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	int suma = 0;

    if(n == 1 ){ //Caso general
        suma = 1;
    }
    else{
        suma = n + sumaRecursiva(n-1);
    }
    return suma;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int suma = 0;

	suma = (n*(n+1))/2;

	return suma;
}

#endif /* ACTIVITY_H */
