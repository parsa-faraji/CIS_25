//
//  main.cpp
//  classActivity22
//
//  Created by Parsa Faraji on 10/23/24.
//

#include <iostream>
#include "nameExtractor.hpp"

int main() {
    // declare string variable
    string fullName;
    
    // prompt user for name and take input
    cout << "Please enter your name: " << endl;
    cin >> fullName;
    
    // extract first and last names
    cout << nameExtractor(fullName) << endl;
    
    return 0;
}
