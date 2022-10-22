#include <iostream>
#include "priorityQueue.h"
using namespace std;

int main(){
    // Implementación de Max Heap en C++
    Priority_Queue<int> pq(7);
 
    // Probando función empty()
    cout << "Implementando empty()" << endl;
    cout << "Empty es igual a " << pq.empty() << "\n" << endl;

    // Llenando el heap
    cout << "Implementación de push()" << endl;
    pq.push(12);
    cout << pq.toString() << endl;
    pq.push(31);
    cout << pq.toString() << endl;
    pq.push(80);
    cout << pq.toString() << endl;
    pq.push(69);
    cout << pq.toString() << endl;
    pq.push(50);
    cout << pq.toString() << endl;
    pq.push(42);
    cout << pq.toString() << endl;
    pq.push(20);
    cout << pq.toString() << endl;

    cout << "Después de implementar siete veces push()" << endl;
    cout << "Empty es igual a " << pq.empty() << "\n" << endl;

    // Probando función pop()
    cout << "Implementacón de pop()" << endl;
    pq.pop();
    cout << pq.toString() << "\n" << endl;

    // Probando función top()
    cout << "Implementación de top()" << endl;
    cout << "El tope del heap es: " << pq.top() << "\n" << endl;

    // Llenando el heap para la función full()
    cout << "Implementación de full()" << endl;
    pq.push(54);
    cout << pq.toString() << endl;
    cout << "Full es igual a " << pq.full() << "\n" << endl;

    cout << "Implementación de size()" << endl;
    cout << "El tamaño del heap es de: " << pq.size() << endl;
    return 0;
}
