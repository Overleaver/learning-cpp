#include <iostream>

int main() {
    int number;
    do {
        std::cout << "Enter a non-negative integer: ";
        std::cin >> number;
    }
    while (number < 0);
    
    int factorial = number;
    for (int i = 2; i < number; ++i) {
        factorial *= i;
    }

    if (number == 0) {
        factorial = 1;
    }

    std::cout << number << "! = " << factorial;
    
    return 0;
}