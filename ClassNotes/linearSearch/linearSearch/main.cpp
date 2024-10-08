//
//  main.cpp
//  linearSearch
//
//  Created by Parsa Faraji on 10/7/24.
//

#include <iostream>

int linearSearch(int* array, int size, int targetValue) {
    for(int i = 0; i < size; i++) {
        if (array[i] == targetValue) {
            return i;
        }
    }
    return -1;
}

int main() {
    // test 1
    int test1[5] = {1 , 7, 10, 78, 3};
    int target1 = 78;
    
    
    // test 2
    int test2[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    int target2 = 4;
    
    
    
}


