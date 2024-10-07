//
//  main.cpp
//  classOct2
//
//  Created by Parsa Faraji on 10/2/24.
//

#include <iostream>
using namespace std;
#include "util.hpp"

int main() {
    string names[5] = {"James", "John", "Joan", "Julie", "Jackie"};
    double grades[5] = {98, 54, 87, 100, 49};
    
    cout << getAverage(grades, 5) << endl;
    cout << getMax(grades, 5) << endl;
    cout << getMin(grades, 5) << endl;
    
    int start = 0;
    while (start < 5) {
        if (findAboveAverage(grades, 5, start) != 1000) {
            cout << findAboveAverage(grades, 5, start) << endl;
        }
        start++;
        
    }
    
    return 0;
}
