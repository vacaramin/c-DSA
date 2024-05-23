#include "Array.h"
#include <stdexcept>

template <typename T>
Array<T>::Array(int size) : size(size), data(new T[size]) {}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
int Array<T>::getSize() const {
    return size;
}
