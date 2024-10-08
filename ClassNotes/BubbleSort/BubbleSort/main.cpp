//
//  main.cpp
//  BubbleSort
//
//  Created by Parsa Faraji on 10/7/24.
//

#include <iostream>

void sortArray(int* array, int size) {
    int high = size;
    int i = 0;
    int temp;
    while (i < high) {
        for (int i = 0; i < high; i++) {
                if (array[i] > array[i+1]) {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i+1] = temp;
                }
        }
        high--;
        
    }
}

int main() {
    int myArray[5] = {4, 3, 8, 2, 1};
    
    sortArray(myArray, 5);
    for (int num: myArray) {
        std::cout << num << "\n";
    }
    return 0;
}
