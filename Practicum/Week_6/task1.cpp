#include <iostream>

//...

char getSign(int n) {
    return n >= 0 ? '+' : '-';
}

int main() {
    unsigned n;
    do {
        std::cin >> n;
    } while (n < 1 || n > 100);

    bool first = true;
    bool firstFound = true;
    int prev;

    for (unsigned i = 0; i < n - 1; ++i) {
        int num;
        std::cin >> num;

        if (first) {
            first = false;
            prev = num;
            continue;
        }

        if (getSign(num) != getSign(prev)) {
            if (firstFound) {
                firstFound = false;
            }
            else {
                std::cout << ' ';
            }
            std::cout << prev;
        }
        prev = num;
    }
    
    return 0;
}