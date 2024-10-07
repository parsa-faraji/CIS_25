//
//  util.cpp
//  classOct2
//
//  Created by Parsa Faraji on 10/7/24.
//

#include "util.hpp"
using namespace std;
#include <iostream>

double getAverage(double* grades, int size){
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return sum / size;
}

double getMax(double* grades, int size) {
    double max = grades[0];
    for (int i = 0; i < size; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }
    return max;
}

double getMin(double* grades, int size) {
    double min = grades[0];
    for (int i = 0; i < size; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
    }
    return min;
}

double findAboveAverage(double* grades, int size, int start) {
    double average = getAverage(grades, size);
    double aboveAverage = -2; // impossible value for control strucutre
    for (int i = start; i < size; i++) {
        if (grades[i] > average) {
            aboveAverage = grades[i];
            return aboveAverage;
        }
    }
    return -1000;
}

void printList(double* list, int size) {
    for (int i = 0; i < size; i++) {
        cout << list[i] << endl;
    }
}

