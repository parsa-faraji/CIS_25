//
//  main.cpp
//  Sep 23
//
//  Created by Parsa Faraji on 9/23/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // declare row
    int row;
    
    // take input
    cout << "Please enter number of rows: \n";
    cin >> row;
    
    // outer loop to print rows
    for (int i = 0; i < row; i++) {
        // inner loop to print asterisks
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
