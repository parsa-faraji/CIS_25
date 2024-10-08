//
//  linearSearch.cpp
//  linearSearch
//
//  Created by Parsa Faraji on 10/7/24.
//

#include "linearSearch.hpp"

int linearSearch(int* array, int size, int targetValue) {
    for(int i = 0; i < size; i++) {
        if (array[i] == targetValue) {
            return i;
        }
    }
    return -1;
}
