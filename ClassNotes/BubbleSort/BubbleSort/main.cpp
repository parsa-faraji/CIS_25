//
//  main.cpp
//  BubbleSort
//
//  Created by Parsa Faraji on 10/7/24.
//

#include <iostream>

void sortArray(int array[], int size) {
    int high = size;
    int i = 0;
    int temp;
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
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
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
        high--;
    }
}

int main() {
    int myArray[5] = {4, 3, 8, 2, 1}; // 1 2 3 4 8
    

    
    sortArray(myArray, 5);
    for (int num: myArray) {
        std::cout << num << " ";
    }
    return 0;
}
