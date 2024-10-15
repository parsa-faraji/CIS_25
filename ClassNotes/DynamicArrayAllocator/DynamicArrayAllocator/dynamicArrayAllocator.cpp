//
//  dynamicArrayAllocator.cpp
//  DynamicArrayAllocator
//
//  Created by Parsa Faraji on 10/14/24.
//

#include "dynamicArrayAllocator.hpp"

int dynamicArrayAllocator() {
    // array declaration
    int* array = new int[1];
    // number of entries
    int entries = 0;

    // loop over and take input
    while (true){
        std::cout << "Please Enter a number: (anything else to exit)" << std::endl;
        std::cin >> array[entries];
        // if a string is entered, break out
        if (std::cin.fail()){
            break;
        }
        // increment entries
        entries++;
    }
    // initialize sum to zero
    int sum = 0;
    // add up and calculate sum
    for (int i =0; i < entries; i++){
        sum += array[i];
    }
    return sum;
}
