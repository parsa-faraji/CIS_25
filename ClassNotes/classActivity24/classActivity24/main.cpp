//
//  main.cpp
//  classActivity24
//
//  Created by Parsa Faraji on 10/21/24.
//

// header files

#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

int main() {
    // create an object
    Customer customer;
    
    // ask and store name
    cout << "Please enter a name: " << endl;
    getline(cin,customer.name);
    
    // ask and store id
    cout << "Please enter an id: " << endl;
    cin >> customer.Id;
    
    // ask and store email
    cout << "Please enter an email: " << endl;
    cin >> customer.email;
    
    //display info
    
    cout << "Customer name: " << customer.name << endl;
    cout << "Customer Id: " << customer.Id << endl;
    cout << "Customer Email: " << customer.email << endl;
    
    return 0;
}
