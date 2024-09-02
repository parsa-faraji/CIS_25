// Aug 28th 2024
#include <iostream>


int main() {
    int num1 = 2;
    int num2 = 1;
    
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    
    int temp = num1;
    
    num1 = num2;
    num2 = temp;
    
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    return 0;
}
