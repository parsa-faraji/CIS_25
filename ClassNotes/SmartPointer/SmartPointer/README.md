# SmartPointer - ArrayFiller

## Author
[Parsa Faraji Alamouti]

## Project Objective
The **SmartPointer - ArrayFiller** project demonstrates the use of C++ smart pointers, specifically `std::unique_ptr`, for dynamically managing arrays. The program takes user input to fill a dynamically allocated array and ensures proper memory management by leveraging smart pointers.

## Features
- **Dynamic Memory Management**: Uses `std::unique_ptr` to manage a dynamically allocated array, eliminating the risk of memory leaks.
- **User Input**: Prompts the user to fill the array with elements.
- **Safe and Modern C++**: Employs modern C++ best practices, including smart pointers, to simplify and secure memory management.

## Code Overview
1. **Functionality**: 
   - The `arrayFiller` function accepts a smart pointer to an integer array (`std::unique_ptr<int[]>`) and its size.
   - It iterates over the array, prompting the user to input values for each element.
2. **Smart Pointer**:
   - Automatically handles memory deallocation when the pointer goes out of scope, ensuring safe and efficient memory usage.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/parsa-faraji/SmartPointerArrayFiller
