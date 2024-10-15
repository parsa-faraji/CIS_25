//
//  printSum.cpp
//  SmartPointer
//
//  Created by Parsa Faraji on 10/14/24.
//

#include "printSum.hpp"
#include <memory>
#include <iostream>

// function to print the sum of numbers in the array

void printSum(const std::unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    std::cout << "The sum of the array elements is: " << sum << std::endl;
}
