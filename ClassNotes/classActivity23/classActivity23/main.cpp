//
//  main.cpp
//  classActivity23
//
//  Created by Parsa Faraji on 10/23/24.
//

#include <iostream>
#include "customerValidator.hpp"

int main() {
    string customerInfo = "12pars";
    
    cout << boolalpha << customerValidator(customerInfo) << endl;
    return 0;
}
