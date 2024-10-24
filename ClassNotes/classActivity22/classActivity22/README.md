# Name Extractor Program

## Description
This program extracts the first and last name from a given full name variable. It is a simple yet effective demonstration of string manipulation in programming.

## Features
- Takes a full name as input.
- Extracts and displays the first name and last name separately.

## Usage
To use this program, ensure you have a suitable development environment set up for C++. Compile and run the program. Input a full name when prompted, and the program will display the extracted first and last names.

### Example
```cpp
#include "nameExtractor.hpp"
#include <iostream>

using namespace std;

// Function to extract first and last name
string nameExtractor(string fullName) {
    // Initialize firstName and lastName
    string firstName = "";
    string lastName = "";
    
    // Boolean to know when space is hit
    bool spaceFound = false;
    
    // Iterate to find space in between
    for (char ch : fullName) {
        if (ch == ' ') {
            spaceFound = true;
        }
        
        if (!spaceFound) {
            firstName += ch;
        } else {
            lastName += ch;
        }
    }
    return firstName + " " + lastName; // Return the combined result
}

int main(
