// =================================================================
//
// File: priorityQueue.h
// Author: Daniel Fuentes
// Description: This file contains the implementation of TDA Heap
//							(in this case is MAX-HEAP).
//
// Copyright (c) 2022 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>
#include <string>
#include <sstream>

template <class T>
class Priority_Queue {
    private:
        T 	 *data;
	    uint length;
	    uint count;

        uint parent(uint) const;
	    uint left(uint) const;
	    uint right(uint) const;
	    void pushUp(uint);
	    void swap(uint, uint);

    public:
        Priority_Queue(uint);
	    ~Priority_Queue();
	    bool empty() const;
	    bool full() const;
	    uint size() const;
	    void push(T);
	    T    pop();
	    void clear();
        uint top() const;
	    std::string toString() const;
};

// =================================================================
// Constructor. Initializes the maximum length of the heap and creates
// the array.
//
// @param lgth, the maximum size of the heap.
// =================================================================
template <class T>
Priority_Queue<T>::Priority_Queue(uint lgth) {
	length = lgth;
	data = new T[length];
	count = 0;
}

// =================================================================
// Destructor. Free used dynamic memory.
//
// =================================================================
template <class T>
Priority_Queue<T>::~Priority_Queue() {
	delete [] data;
	data = NULL;
	length = 0;
	count = 0;
}

// =================================================================
// Returns if the heap is empty or not.
//
// @returns True is the amount of elements is 0 (empty). False,
//					otherwise.
// =================================================================
template <class T>
bool Priority_Queue<T>::empty() const {
	return (count == 0);
}

// =================================================================
// Returns if the heap is full or not.
//
// @returns True is the amount of elements is equal to the maximum.
//					False, otherwise.
// =================================================================
template <class T>
bool Priority_Queue<T>::full() const {
	return (count == length);
}

// =================================================================
// Returns the number of elements in the heap
//
// @returns the number of elements in the heap.
// =================================================================
template <class T>
uint Priority_Queue<T>::size() const {
	return count;
}

// =================================================================
// Returns the position of the parent of an element.
//
// @returns the index of the parent
// =================================================================
template <class T>
uint Priority_Queue<T>::parent(uint pos) const {
	return (pos - 1) / 2;
}

// =================================================================
// Returns the position of the left child of an element.
//
// @returns the index of the left child.
// =================================================================
template <class T>
uint Priority_Queue<T>::left(uint pos) const {
	return (pos * 2) + 1;
}

// =================================================================
// Returns the position of the right child of an element.
//
// @returns the index of the right child.
// =================================================================
template <class T>
uint Priority_Queue<T>::right(uint pos) const {
	return (pos * 2) + 2;
}

// =================================================================
// Swap the content of two locations.
//
// @param i, j, indeces to be swapped.
// =================================================================
template <class T>
void Priority_Queue<T>::swap(uint i, uint j) {
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}

// =================================================================
// Place the item in the correct position. Being a max-heap, the
// element must be greater than its children. If not, recursively
// perform the pushUp.
//
// @param pos, the current position of the item being inserted.
// =================================================================
template <class T>
void Priority_Queue<T>::pushUp(uint pos) {
    uint le = left(pos);
    uint ri = right(pos);
    uint max = pos;

    if (le < count && data[le] > data[max]){
        max = le;
    }
    if (ri < count && data[ri] > data[max]){
        max = ri;
    }

    if(max != pos){
        swap(pos, max);
        pushUp(max);
    }
}

// =================================================================
// Add an element to the heap. It is placed, initially, as the
// rightmost blade. Afterwards, it is verified if he is greater than
// the father. If that is the case, it is exchanged. This process is
// repeated until the correct position is reached.
//
// @param val, the element to be added.
// =================================================================
template <class T>
void Priority_Queue<T>::push(T val) {
	uint pos;
	if (full()){
		std::cout << "The heap is full" << std::endl;
	}

	pos = count;
	count++;
	while(pos > 0 && val > data[parent(pos)]){
		data[pos]= data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
}

// =================================================================
// Remove the root of the tree. The rightmost sheet is placed as a
// temporary successor. The tree is rearranged using the pushUp
// method.
//
// @returns, in this case, the maximum element in the heap.
// =================================================================
template <class T>
T Priority_Queue<T>::pop() {
	if (empty()){
		std::cout << "The heap is empty" << std::endl;
	}

	T aux = data[0];
	data[0] = data[--count]; // data[0] = data[count]; count--;
	pushUp(0);
	return aux;
}

// =================================================================
// Removes all elements from heap.
//
// =================================================================
template <class T>
void Priority_Queue<T>::clear() {
	count = 0;
}

// =================================================================
// Returns the top of the heap. 
//
// @returns, the root of the tree.
// =================================================================
template <class T>
uint Priority_Queue<T>::top() const {
    if (empty()){
		std::cout << "The heap is empty" << std::endl;
	}
    else {
        return data[0];
    }
}

// =================================================================
// Return a string representation of the heap.
//
// @returns, a string with the elements of the heap.
// =================================================================
template <class T>
std::string Priority_Queue<T>::toString() const {
	std::stringstream aux;

	aux << "[";
	for (uint i = 0; i < count; i++) {
		if (i != 0) {
			aux << " ";
		}
	aux << data[i];
	}
	aux << "]";
	return aux.str();
}
#endif