//
//  main.cpp
//  classActivity26
//
//  Created by Parsa Faraji on 11/1/24.
//

#include <iostream>
#include "Point.h"

int main() {
    // struct initialization
    Point point1 = {10, 5};
    Point point2 = {1, 2};
    Point point3 = {1, 2};
    
    // print output
    cout << "point1 - point2 - point3" << endl;
    cout << point1;
    cout << point2;
    cout << point3;
    
    // empty line
    cout << endl;
    cout << endl;
    
    
    // check equality
    cout << "Is " << point1 << " equal to " << point2 << "? " << boolalpha << (point1 == point2) << endl;
    cout << "Is " << point2 << " equal to " << point3 << "? " << boolalpha << (point2 == point3) << endl;
}
