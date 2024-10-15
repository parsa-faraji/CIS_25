//
//  main.cpp
//  PointerSwap
//
//  Created by Parsa Faraji on 10/8/24.
//

#include <iostream>
using namespace std;


int main() {
    int var1 = 15;
    int* ptr1 = &var1;
    
    int var2 = 30;
    int* ptr2 = &var2;
    
    int temp;
    int* ptr_temp = &temp;
    
    cout << "before: " << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    
    *ptr_temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr_temp;

    cout << "after: " << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    
}
