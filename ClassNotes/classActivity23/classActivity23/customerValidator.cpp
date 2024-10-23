//
//  customerValidator.cpp
//  classActivity23
//
//  Created by Parsa Faraji on 10/23/24.
//

#include "customerValidator.hpp"

bool customerValidator(string customerNumber){
    // boolean value
    bool isValid = true;
    // loop through customer Number
    for (int i = 0; i < customerNumber.size(); i++) {
        if (i <= 1) {
            // check if first two are alphabetical
            if (!isalpha(customerNumber[i])){
                return false;
            }
        }
        else {
            // check if others are digits
            if (!isdigit(customerNumber[i])){
                return false;
            }
        }
    }
    return true;
}
