//
//  main2.cpp
//  Sep_16
//
//  Created by Parsa Faraji on 9/16/24.
//

#include "main2.hpp"
#include <iostream>
using namespace std;

int main2() {
    int numbers[] = {1, 2, 3 , 4, 5};
    
    for(int number: numbers){
        cout << number << endl;
    }
    
    cout << sizeof('2') << endl;
    return 0;
}
