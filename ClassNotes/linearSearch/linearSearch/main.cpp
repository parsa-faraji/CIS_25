//
//  main.cpp
//  linearSearch
//
//  Created by Parsa Faraji on 10/7/24.
//

#include <iostream>
#include "linearSearch.hpp"

int main() {
    // test 1
    int test1[5] = {1 , 7, 10, 78, 3};
    int target1 = 78;
    
    
    // test 2
    int test2[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    int target2 = 4;
    
    
    std::cout <<  linearSearch(test1, 5, target1) << std::endl;
    std::cout << linearSearch(test2, 10, target2) << std::endl;
    
}


