//
//  main.cpp
//  UserAddress
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    // create variables
    string street;
    string city;
    string state;
    string zipCode;
    
    // prompt user and collect data
    cout << "Please enter your Street Address:\n";
    getline(cin, street);
    
    cout << "Please enter your city:\n";
    getline(cin, city);
    
    cout << "Please enter your state:\n";
    getline(cin, state);
    
    cout << "Please enter your zipcode: ";
    getline(cin, zipCode);
    
    // print to console
    cout << "Your address: " << street << "\n";
    cout << city << ", " << state << ", " << zipCode << "\n";
    
    
    return 0;
}
