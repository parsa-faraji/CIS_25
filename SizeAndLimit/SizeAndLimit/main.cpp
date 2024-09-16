//
//  main.cpp
//  SizeAndLimit
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    
    cout << "Data Type: short" << endl;
    cout << "Size: "  << sizeof(short) << endl;
    cout << "Limits: Min: " << numeric_limits<short>::min();
    cout << " // Max: " << numeric_limits<short>::max() << endl;
    
    cout << endl;
    
    cout << "Data Type: double" << endl;
    cout << "Size: "  << sizeof(double) << endl;
    cout << "Limits: Min: " << numeric_limits<double>::min();
    cout << " // Max: " << numeric_limits<double>::max() << endl;
    
    
}
