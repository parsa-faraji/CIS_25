//
//  temp.cpp
//  Sep_16
//
//  Created by Parsa Faraji on 9/16/24.
//

#include "temp.hpp"
#include <iostream>
using namespace std;

int main4() {
    int numberOfAsks;
    double temp;
    double sum = 0;
    
    cout << "How many temperatures do you want to add? " << endl;
    cin >> numberOfAsks;
    
    double tempsArray[numberOfAsks];
    for (int i = 0; i < numberOfAsks; i++)  {
        cout << "Temperature: ";
        cin >> temp;
        sum += temp;
        tempsArray[i] = temp;
    }
    cout << "The average is: " << (sum / numberOfAsks) << endl;
    return 0;
}
