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
    // 1 => 1 / 2 => 10 / 7 = 4 + 2 + 1 +> 111
    // 25 = 16 + 8 + 1 =>> 11001
    // 25:
    // start from 1, find the biggest multiple of 2 smaller than 25
    // 1 <= 25 --> 2 <= 25 --> 4 <= 25 --> 8 <= 25 --> 16 <= 25 --> 32 !<= 25
    // therefore we have one (1) in the 5th place (2 ^ 4) aka last place
    // 25 - 16 = 9
    // apply the same function on 9:
    // 1 <= 9 --> 2 <= 9 --> 4 <= 9 --> 8 <= 9 --> 16 !<= 9
    // therefore we have one in the 4th place (2 ^ 3)
    // 9 - 8 = 1
    // apply the same on 1
    // 1 <= 1
    // therefore weh have one in the first place (2 ^ 0)
    
    // now create a string with 1 in the allocated places and zeros in between
    // using a for loop
    
    
}
