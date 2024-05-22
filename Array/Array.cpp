#include <iostream>
#include <initializer_list>

using namespace std;

class Array{
    private:
        int length;
        int* array;
    public:
    Array(int length){
        this->length = length;
        this->array = new int[length];
    }
    Array(initializer_list<int> init_list){
        this->length = init_list.size();
        this->array = new int[this->length];
        int i = 0;
        for (int value : init_list) {
            this->array[i++] = value;
        }
    }
     // Copy constructor
    Array(const Array& other) {
        this->length = other.length;
        this->array = new int[this->length];
        for (int i = 0; i < this->length; ++i) {
            this->array[i] = other.array[i];
        }
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] this->array;
    }

     // Overloaded operator[] to access elements
    int& operator[](int index) {
        if (index < 0 || index >= length) {
            throw out_of_range("Index out of range");
        }
        return array[index];
    }

    // Function to get the length of the array
    int getLength() const {
        return length;
    }

    // Function to print the array
    void print() const {
        for (int i = 0; i < length; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    cout << "Hello World" << endl;
    // Creating an array with a specific length
    Array arr1(5);
    arr1.print(); // Output: 0 0 0 0 0 

    // Creating an array with an initializer list
    Array arr2 = {1, 2, 3, 4, 5};
    arr2.print(); // Output: 1 2 3 4 5

    // Accessing and modifying elements using the overloaded operator[]
    arr2[2] = 10;
    arr2.print(); // Output: 1 2 10 4 5

    // Testing out-of-range access
    try {
        cout << arr2[5] << endl; // Should throw an exception
    } catch (const out_of_range& e) {
        cerr << e.what() << endl; // Output: Index out of range
    }

    return 0;
}