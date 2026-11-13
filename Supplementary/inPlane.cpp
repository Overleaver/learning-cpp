#include <iostream>

const double DIAMETER = 4.00;
constexpr double RADIUS = DIAMETER / 2.00;
constexpr double RADIUS_SQ = RADIUS * RADIUS;

bool inPlane(const double x, const double y) {
    bool upperLeft = (x + 2) * (x + 2) +  y * y <= RADIUS_SQ
                   && x * x + (y - 2) * (y - 2) <= RADIUS_SQ;
    
    bool upperRight = x * x + (y - 2) * (y - 2) <= RADIUS_SQ
                 && (x - 2) * (x - 2) + y * y  <= RADIUS_SQ;                      
    
    bool lowerLeft = x * x +  (y + 2) * (y + 2) <= RADIUS_SQ
                  && (x + 2) * (x + 2) + y * y <= RADIUS_SQ;
                   
    bool lowerRight = (x - 2) * (x - 2) + y * y <= RADIUS_SQ
                    && x * x + (y + 2) * (y + 2)  <= RADIUS_SQ;                                   
    
    return upperLeft || upperRight || lowerRight || lowerLeft;
}

int main() {
    size_t validPointsEntered = 0;

    double x, y;
    while (validPointsEntered != 10) {
        std::cin >> x >> y;
        if (inPlane(x, y)) {
            ++validPointsEntered;
            std::cout << "Point is in the plane.";
        }
        else {
            std::cout << "Point is not in the plane.";
        }
        std::cout << '\n';
    }
    
    return 0;
}