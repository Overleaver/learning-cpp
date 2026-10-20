#include <iostream>

int main() {
    int a;
    do {
        std::cout << "Enter a non-negative integer: ";
        std::cin >> a;
    }
    while (a < 0);
        

    return 0;
}