#include <iostream>

int main() {
    unsigned int a;
    std::cout << "Enter a positive integer: ";
    std::cin >> a;

    std::cout << std::boolalpha << (a % 4 == 0 && (a % 100 == 0 ? (a % 400 == 0 ? 1 : 0) : 1)) << '\n';
    
    return 0;
}