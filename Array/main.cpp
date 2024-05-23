#include <iostream>
#include "Array.h"

int main() {
    Array<int> arr(10);
    for (int i = 0; i < arr.getSize(); ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < arr.getSize(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
