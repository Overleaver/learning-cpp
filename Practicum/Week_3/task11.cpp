#include <iostream>

int main() {
    unsigned n;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> n;
    } while (n <= 0);

    unsigned steps = 0, max = n;
    while (n != 1) {
        max = ((n > max) ? n : max);
        n = (n % 2 == 0) ? (n / 2) : (3 * n + 1);
        steps++;
    }
    std::cout << "Steps: " << steps << '\n';
    std::cout << "Max: " << max << '\n';
    
    return 0;
}