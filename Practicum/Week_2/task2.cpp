#include <iostream>

int main() {
    unsigned int a, d1, d2, d3, d4, copy;
    std::cout << "Enter a positive four-digit integer: ";
    std::cin >> a;

    copy = a;
    d1 = a % 10;
    a /= 10;
    d2 = a % 10;
    a /= 10;
    d3 = a % 10;
    a /= 10;
    d4 = a % 10;    

    std::cout << (d1 == d4 && d2 == d3) << '\n';
    
    return 0;
}