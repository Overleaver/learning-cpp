#include <iostream>

int main() {
    int a, b;
    do {
        std::cout << "Enter two natural numbers: ";
        std::cin >> a >> b;
    }
    while (a < 0 || b < 0);

    int min, max;
    if (a > b) {
        max = a;
        min = b;
    }
    else {
        min = a;
        max = b;
    }

    // std::cout << "min:" << min << '\n';
    // std::cout << "max:" << max << '\n';

    int r, copy;
    for (int i = min; i <= max; ++i) {
        // int left, right = i % 10;
        // while (left < right) {
        //     if (left != right) {
        //         continue;
        //     }
        // }

        r = 0;
        copy = i;
        while (copy != 0) {
            r = r * 10 + copy % 10;
            copy /= 10;
        }

        if (r == i) {
            std::cout << i;
            if (max - 1 > i) {
                std::cout << ' ';
            }
        }
    }
    
    return 0;
}