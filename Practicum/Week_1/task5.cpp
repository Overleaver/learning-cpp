#include <iostream>

int main() {
    int a, d1, d2, d3, d4;
    std::cout << "Enter a four-digit integer: ";
    std::cin >> a;

    d1 = a % 10;
    a /= 10;
    d2 = a % 10;
    a /= 10;
    d3 = a % 10;
    a /= 10;
    d4 = a;

    std::cout << d1 << '-' << d2 << '-' << d3 << '-' << d4 << '\n';
    
    return 0;
}