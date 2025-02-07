#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Sum: " << add(num1, num2) << std::endl;
    std::cout << "Product: " << multiply(num1, num2) << std::endl;
    std::cout << "Maximum: " << max(num1, num2) << std::endl;

    return 0;
}
