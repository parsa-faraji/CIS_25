//
//  nameExtractor.cpp
//  classActivity22
//
//  Created by Parsa Faraji on 10/23/24.
//

#include "nameExtractor.hpp"

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
        // build first name
        if (!spaceFound) {
            firstName += ch;
        }
        // build last name
        else {
            lastName += ch;
        }
    }
    // return result
    return "First Name: " + firstName + "  Last Name: " + lastName;
}
