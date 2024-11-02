# Point Project

## Overview
This project defines a `Point` structure in C++ to represent a point in 2D space with `x` and `y` coordinates. It includes overloaded operators for equality comparison (`==`) and stream insertion (`<<`) to facilitate comparisons and formatted output of `Point` objects.

## File Structure
- `Point.h` - Header file containing the declaration of the `Point` structure, as well as the declarations for `operator==` and `operator<<`.
- `Point.cpp` - Implementation file for the `Point` structure, defining the `operator==` and `operator<<` functions.
- `main.cpp` - A test file to demonstrate the functionality of the `Point` structure and overloaded operators.

## Features
- **Equality Comparison**: The `operator==` allows for direct comparison between two `Point` objects. If both the `x` and `y` coordinates are equal, the points are considered equal.
- **Stream Insertion**: The `operator<<` allows `Point` objects to be printed in the format `(x, y)` using standard output streams, like `std::cout`.

## Code Example
Here’s how to use the `Point` structure in `main.cpp`:

```cpp
#include <iostream>
#include "Point.h"

int main() {
    Point p1{3, 4};
    Point p2{3, 4};
    Point p3{5, 6};

    // Test equality
    std::cout << (p1 == p2 ? "p1 is equal to p2" : "p1 is not equal to p2") << std::endl;
    std::cout << (p1 == p3 ? "p1 is equal to p3" : "p1 is not equal to p3") << std::endl;

    // Output points
    std::cout << "Point p1: " << p1 << std::endl;
    std::cout << "Point p3: " << p3 << std::endl;

    return 0;
}
