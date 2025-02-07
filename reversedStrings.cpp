#include <iostream>
#include <string>
#include <algorithm>

// Function to reverse a given string
std::string reverseString(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reversed = reverseString(input);
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}