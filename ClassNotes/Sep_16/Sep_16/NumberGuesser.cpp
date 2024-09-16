//
//  NumberGuesser.cpp
//  Sep_16
//
//  Created by Parsa Faraji on 9/16/24.
//

#include "NumberGuesser.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    long value = time(0);
    srand(value);
    
    int number = rand() % 6;
    int input = 7;
    
    while (input != number) {
        cout << "Enter a number: " << endl;
        cin >> input;
    }
    cout << "The answer was " << number << endl;
    
    return 0;
    
}
