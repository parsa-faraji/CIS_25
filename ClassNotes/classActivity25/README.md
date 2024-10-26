# Customer Address Management

This C++ project demonstrates how to create and manage structures for representing customer addresses. It defines an `Address` structure containing three members: `street`, `city`, and `zip code`. This `Address` structure is then nested within a `Customer` structure. The project initializes a complete `Customer` object and outputs the details.

## Project Structure

The project consists of the following files:

1. **Address.h**: Defines the `Address` structure.
2. **Customer.h**: Defines the `Customer` structure, which nests the `Address` structure.
3. **main.cpp**: Contains the `main` function to initialize and display a `Customer` object.

## File Descriptions

### Address.h

This header file contains the definition of the `Address` structure.

```cpp
struct Address {
    std::string street;
    std::string city;
    std::string zipCode;
};
