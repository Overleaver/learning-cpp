#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Enter four integers: ";
    std::cin >> a >> b >> c >> d;

    int start = a > c ? a : c;
    int end = b < d ? b : d;

    if (b < c) {
        std::cout << "No shared points\n";
        return 0;
    }
    
    return 0;
}