//
//  main.cpp
//  SmartPointer
//
//  Created by Parsa Faraji on 10/14/24.
//

#include <iostream>
#include "printSum.hpp"
#include "arrayFiller.hpp"

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // dynamic allocation
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    // add user
    arrayFiller(arr, size);

    // Print the sum of the array elements
    printSum(arr, size);

    return 0;
}
