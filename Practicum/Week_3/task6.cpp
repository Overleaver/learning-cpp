#include <iostream>

int main() {
    int a;
    do {
        std::cout << "Enter a non-negative integer: ";
        std::cin >> a;
    } while (a < 0);
    
    for (int i = 0; i <= 9; i++) {
        int digit = i;
        int counter = 0;

        int copy = a;
        do {
            if (copy % 10 == digit) {
                ++counter;
            }
            copy /= 10;
        } while (copy != 0);

        std::cout << digit << ": " << counter << '\n';
    }

    return 0;
}