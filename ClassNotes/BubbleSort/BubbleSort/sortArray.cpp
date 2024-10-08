//
//  sortArray.cpp
//  BubbleSort
//
//  Created by Parsa Faraji on 10/7/24.
//

#include "sortArray.hpp"
#include <iostream>

void sortArray(int array[], int size) {
    int high = size;
    int i = 0;
    int temp;
    
    while (i < high - 1) {
        // 1) i = 0 , high = 5
        for (int j = 0; j < high - 1; j++) {
            // {4, 3, 8, 2, 1}
                if (array[j] > array[j+1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j+1] = temp;
                }
        }
        high--;
    }
}
