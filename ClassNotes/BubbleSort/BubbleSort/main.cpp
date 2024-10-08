//
//  main.cpp
//  BubbleSort
//
//  Created by Parsa Faraji on 10/7/24.
//

#include <iostream>
#include "sortArray.hpp"


int main() {
    int myArray[5] = {4, 3, 8, 2, 1}; // 1 2 3 4 8
    std::cout << "Unsorted Array: ";
    for (int num: myArray) {
        std::cout << num << " ";
    }
    
    std::cout << "\n";
    
    sortArray(myArray, 5);
    std::cout << "Sorted Array: ";
    for (int num: myArray) {
        std::cout << num << " ";
    }
    return 0;
}
