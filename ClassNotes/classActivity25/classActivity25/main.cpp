//
//  main.cpp
//  classActivity25
//
//  Created by Parsa Faraji on 10/23/24.
//

#include <iostream>
#include "Customer.h" 

int main() {
    // customer object
    Customer customer = {
        "Parsa Faraji",           // name
        1234,                // customerID
        {"123 Berkeley St",       // street
         "Berkeley",           // city
         "94706"}             // zipCode
    };

    // Output the Customer details
    std::cout << "Customer Name: " << customer.name << std::endl;
    std::cout << "Customer ID: " << customer.customerID << std::endl;
    std::cout << "Address: " << customer.address.street << ", "
              << customer.address.city << ", "
              << customer.address.zipCode << std::endl;

    return 0;
}
