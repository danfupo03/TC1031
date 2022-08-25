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
// @Complexity	"O(n)" el crecimiento es lineal en tanto el tiempo 
// de ejecución es cada vez mayor de modo proporcional a cómo se 
// incrementa el tamaño de la entrada.
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
// @Complexity	"O(n)" el crecimiento es lineal en tanto el tiempo 
// de ejecución es cada vez mayor de modo proporcional a cómo se 
// incrementa el tamaño de la entrada. 
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    int suma = 0;

    if(n == 1 ){ 
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
// @Complexity "O(1)" Quiere decir que el tiempo de ejecución no 
// varia conforme aumenta el tamaño de los datos de entrada. 
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
    return n*(n+1)/2;
}

#endif /* ACTIVITY_H */