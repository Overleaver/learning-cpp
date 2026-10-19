#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Enter four integers: ";
    std::cin >> a >> b >> c >> d;

    int start = a > c ? a : c;
    int end = b < d ? b : d;

    if (start < end) {
        std::cout << '[' << start << ", " << end << ']';
    }
    else if (start == end) {
        std::cout << '[' << start << ']';
    }
    else {
        std::cout << "Intervals do not intersect";
    }
    std::cout << '\n';
    
    return 0;
}