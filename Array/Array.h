#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
public:
    Array(int size);
    ~Array();
    T& operator[](int index);
    int getSize() const;
private:
    T* data;
    int size;
};

#include "Array.tpp"  // Include the template implementation

#endif