#include <iostream>

// Function to find the largest of three numbers
int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int maxNumber = largest(num1, num2, num3);
    std::cout << "The largest number is: " << maxNumber << std::endl;

    return 0;
}
