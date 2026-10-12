#include <iostream>

int main() {
    unsigned int a, b, c;
    std::cout << "Enter three positive integers: ";
    std::cin >> a >> b >> c;

    std::cout << (a + b > c &&
                  a + c > b &&
                  b + c > a)
              << '\n';

    return 0;
}