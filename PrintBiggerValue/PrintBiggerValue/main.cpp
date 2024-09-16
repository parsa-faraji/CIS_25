//
//  main.cpp
//  PrintBiggerValue
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    double var1;
    double var2;
    
    cout << "Enter number 1:" << endl;
    cin >> var1;
    
    cout << "Enter number 2:" << endl;
    cin >> var2;
    
    // if statements
    if (var1 > var2)
        cout << var1 << endl;
    else
        cout << var2 << endl;
    
    // condition
    double output;
    output = (var1 > var2)? var1 : var2;
    
    cout << output << endl;
    
    return 0;
}
