#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int min, max;
    if (a > b) {
        max = a;
        min = b;
    }
    else {
        min = a;
        max = b;
    }

    for (int i = min; i <= max; ++i) {
        if (i % 3 == 0) {
            continue;
        }
        if (i % 7 == 0) {
            std::cout << i << '\n';
            break;
        }
    }
    
    return 0;
}