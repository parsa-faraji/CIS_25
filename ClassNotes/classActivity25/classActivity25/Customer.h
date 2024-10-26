//
//  Customer.h
//  classActivity25
//
//  Created by Parsa Faraji on 10/25/24.
//


#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Address.h"

// customer structure
struct Customer {
    std::string name;
    int customerID;
    Address address;  // nested Address structure 
};

#endif // CUSTOMER_H
