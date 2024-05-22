#include <iostream>
#include <initializer_list>

using namespace std;

class Array{
    private:
        int length;
        int* array;
    public:
        Array(int length);
        Array(initializer_list<int> init_list);
        Array(const Array& other) ;
        ~Array() ;
        int& operator[](int index);
        int getLength() const ;
        void print() const;
};
