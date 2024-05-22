#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <initializer_list>

using namespace std;

template <typename T>
class Array{
    private:
        int length;
        T* array;
    public:
        Array(int length);
        Array(initializer_list<T> init_list);
        Array(const Array& other) ;
        ~Array() ;
        T& operator[](int index);
        int getLength() const ;
        void print() const;
};

#include "Array.tpp"

#endif // ARRAY_H