#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << a + b << '\n';
    std::cout << "Difference: " << a - b << '\n';
    std::cout << "Product: " << a * b << '\n';
    std::cout << "Quotient: " << a / b << '\n';
    std::cout << "Remainder: " << a % b << '\n';
    
    return 0;
}