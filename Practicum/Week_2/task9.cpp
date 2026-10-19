#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;
    std::cout << "Enter x1 y1 x2 y2 (Min:1 Max:8): ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        std::cout << "Invalid move - out of board";
        return 0;
    }

    int dx = std::abs(x1 - x2);
    int dy = std::abs(y1 - y2);

    if (dx == 0 && dy == 0) {
        std::cout << "Invalid move - same square";
        return 0;
    }

    bool whitePawn = dx == 0 && y2 > y1 && (y1 == 2 ? (dy == 1 || dy == 2) : dy == 1);
    bool blackPawn = dx == 0 && y1 > y2 && (y1 == 7 ? (dy == 1 || dy == 2) : dy == 1);
    bool knight = (dx == 2 && dy == 1) || (dx == 1 && dy == 2);
    bool bishop = dx == dy;
    bool rook = dx == 0 || dy == 0;
    bool queen = bishop || rook;
    bool king = dx <= 1 && dy <= 1; // && !(dx == 0 && dy == 0)
    
    std::cout << "White pawn: " << whitePawn << '\n';
    std::cout << "Black pawn: " << blackPawn << '\n';
    std::cout << "Knight: " << knight << '\n';
    std::cout << "Bishop: " << bishop << '\n';
    std::cout << "Rook: " << rook << '\n';
    std::cout << "Queen: " << queen << '\n';
    std::cout << "King: " << king << '\n';

    return 0;
}