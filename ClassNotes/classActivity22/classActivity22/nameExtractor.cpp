//
//  nameExtractor.cpp
//  classActivity22
//
//  Created by Parsa Faraji on 10/23/24.
//

#include "nameExtractor.hpp"
#include <iostream>

using namespace std;

// function definition
string nameExtractor(string fullName){
    
    // initialize firstName and lastName
    string firstName = "";
    string lastName = "";
    
    // boolean to know when space is hit
    bool spaceFound = false;
    
    // iterate to find space in between
    for (char ch : fullName) {
        if (ch == ' ') {
            spaceFound = true;
            continue;
        }
        
        if (!spaceFound) {
            firstName += ch;
        }
        else {
            lastName += ch;
        }
    }
    return "First Name: " + firstName + "  Last Name: " + lastName;
}
