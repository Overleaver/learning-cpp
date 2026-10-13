#include <iostream>

int main() {
    int x, y, points;
    std::cout << "Enter coordinates (two real numbers): ";
    std::cin >> x >> y;

    int dist = x * x + y * y;
    if (dist <= 1 * 1) {
        points = 10;
    }
    else if (dist <= 3 * 3) {
        points = 5;
    }
    else if (dist <= 5 * 5) {
        points = 3;
    }
    else {
        points = 0;
    }

    std::cout << points << (points == 0 ? " Miss" : "") << '\n';
    
    return 0;
}