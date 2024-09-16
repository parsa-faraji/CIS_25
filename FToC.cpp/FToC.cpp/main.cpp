//
//  main.cpp
//  FToC.cpp
//
//  Created by Parsa Faraji on 9/9/24.
//  This program converts temperature from C to F

#include <iostream>
#include <iomanip>

int main2() {
    std::cout << "Please enter temperature in °F:" << std::endl;
    
    double fahrenheit;
    std::cin >> fahrenheit;
    
    double celsius;
    celsius = (fahrenheit - 32) * (5.0 / 9);
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Temperature in °C is " << celsius << std::endl;
        
    return 0;
}
