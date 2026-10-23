#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    bool found = false;
    for (int c = 5; c <= n; ++c) {
        for (int b = 4; b < c; ++b) {
            int needed = c * c - b * b;
            for (int a = 3; a < b; ++a) {
                if (a * a == needed) {
                    std::cout << a << ' ' << b << ' ' << c << '\n';
                    if (!found) {
                        found = true;
                    }
                }                
            }
        }
    }

    if (!found) {
        std::cout << "No triples.\n";
    }
    
    return 0;
}