//
//  main.cpp
//  IntToBinary
//
//  Created by Parsa Faraji on 9/25/24.
//  This program prints the binary rep of a positive integer

#include <iostream>

int main(int argc, const char * argv[]) {
    int number;
    std::cout << "Please enter a positive integer: " << std::endl;
    
    std::cin >> number;
    while (!(number > 0)) {
        std::cout << "Make sure number is positive! Enter again:" << std::endl;
        std::cin >> number;
    }
    
    // Thought process: how to turn number to binary??
    //
}
