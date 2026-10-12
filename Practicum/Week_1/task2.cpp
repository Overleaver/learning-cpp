#include <iostream>

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;

    std::cout << (a % 2 == 0) << '\n';

    return 0;
}