//
//  arrayFiller.cpp
//  SmartPointer
//
//  Created by Parsa Faraji on 10/14/24.
//

#include "arrayFiller.hpp"
#include <memory>

// function to fill the array with numbers
void arrayFiller(std::unique_ptr<int[]>& arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}
