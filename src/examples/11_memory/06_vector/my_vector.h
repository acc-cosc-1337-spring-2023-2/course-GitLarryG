//
#include<iostream>
using namespace std; 

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
    Vector(int s);
    int Size() const{return size;};
    int Capacity() const{return capacity;};
    int& operator[](int i);
    void Push_Back(int value);
    void Reserve(int new_allocation);
    void Resize(int new_size);
    void Print();
private:
    int size;
    int capacity;
    int* elements;
};

#endif