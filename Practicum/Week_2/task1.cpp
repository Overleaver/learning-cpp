#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;
    
    std::cout << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << '\n';

    return 0;
}