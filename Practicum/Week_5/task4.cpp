#include <iostream>

void printPosition(int x, int y) {
    std::cout << "Position: (" << x << ", " << y << ")\n";
}

int main() {
    int x = 0, y = 0;
    printPosition(x, y);

    int dx = -1, dy = -1;
    while (dx != 0 && dy != 0) {
        std::cin >> dx >> dy;
        if (x + dx > 10 || x + dx < -10 || y + dy > 10 || y + dy < -10) {
            std::cout << "Invalid command.\n";
            printPosition(x, y);
            dx = dy = -1;
            continue;
        }
        x += dx;
        y += dy;
        printPosition(x, y);
    }
    std::cout << '\n';
    
    return 0;
}