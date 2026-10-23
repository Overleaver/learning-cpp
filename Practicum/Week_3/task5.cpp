#include <iostream>

int main() {
    int a, b;
    do {
        std::cout << "Enter two integers: ";
        std::cin >> a >> b;
    }
    while (a < 0 || b < 0);

    int min = a < b ? a : b;
    int max = a < b ? b : a;

    bool first = true;
    for (int i = min; i <= max; ++i) {
        int r = 0, copy = i;
        while (copy != 0) {
            r = r * 10 + copy % 10;
            copy /= 10;
        }
        
        if (r == i) {
            if (first) {
                first = false;
            }
            else {
                std::cout << ' ';
            }
            std::cout << i;
        }
    }
    
    return 0;
}