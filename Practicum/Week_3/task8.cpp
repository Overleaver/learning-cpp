#include <iostream>

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    
    bool neg = false;
    if (a < 0) {
        a = -a;
        neg = true;
    }

    if (a == 0) {
        std::cout << "00\n";
        return 0;
    }

    int rev = 0, mult = 1, copy = a;
    while (copy != 0) {
        rev = rev * 10 + copy % 10;
        copy /= 10;
        mult *= 10;
    }
    int concat = (neg ? -1 : 1) * (rev * mult + a);

    std::cout << concat << '\n';

    return 0;
}