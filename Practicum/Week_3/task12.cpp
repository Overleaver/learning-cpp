#include <iostream>

int main() {
    unsigned a, b;
    do {
        std::cout << "Enter two positive numbers: ";
        std::cin >> a >> b;
    } while (a <= 0 || b <= 0);
    
    unsigned min = (a < b) ? a : b;
    unsigned max = (a > b) ? a : b;

    for (unsigned i = min; i <= max; ++i) {
        unsigned copy = i, digits = 0, sum = 0;
        while (copy != 0) {
            digits++;
            copy /= 10; 
        }
        copy = i;
        
        while (copy != 0) {
            unsigned digit = copy % 10, raised = 1;
            for (int j = 0; j < digits; ++j) {
                raised *= digit;
            }
            sum += raised;
            copy /= 10;
        }
 
        if (sum == i) {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';

    return 0;
}