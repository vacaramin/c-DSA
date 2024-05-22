#include "Array.h"

// Constructor that accepts the length of the array
template <typename T>
Array<T>::Array(int length) {
    this->length = length;
    this->array = new T[length]();
}

// Constructor that accepts an initializer list
template <typename T>
Array<T>::Array(initializer_list<int> init_list) {
    this->length = init_list.size();
    this->array = new int[this->length];
    int i = 0;
    for (int value : init_list) {
        this->array[i++] = value;
    }
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) {
    this->length = other.length;
    this->array = new T[this->length];
    for (int i = 0; i < this->length; ++i) {
        this->array[i] = other.array[i];
    }
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] this->array;
}

// Overloaded operator[] to access elements
template <typename T>
int& Array<T>::operator[](int index) {
    if (index < 0 || index >= length) {
        throw out_of_range("Index out of range");
    }
    return array[index];
}

// Function to get the length of the array
template <typename T>
int Array<T>::getLength() const {
    return length;
}

// Function to print the array
template <typename T>
void Array<T>::print() const {
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
