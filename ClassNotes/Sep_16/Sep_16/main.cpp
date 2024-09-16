//
//  main.cpp
//  Sep_16
//
//  Created by Parsa Faraji on 9/16/24.
//

#include <iostream>
using namespace std;

int main3() {
    int num;
    int result = 1;
    
    cout << "Enter a positive number: " << endl;
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    
    cout << "The facotrial of " << num << " is " << result << endl;
    return 0;
}
