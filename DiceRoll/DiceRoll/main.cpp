//
//  main.cpp
//  DiceRoll
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
    
    int randomNum1 = rand() % 6 + 1;
    int randomNum2 = rand() % 6 + 1;
    
    std::cout << "random number 1: " << randomNum1 << std::endl;
    std::cout << "random number 2: " << randomNum2 << std::endl;
    return 0;
}
