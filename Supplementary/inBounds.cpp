#include <iostream>

const double RECT_UR_X = 4;
const double RECT_UR_Y = 3;
const double RECT_LL_X = -4;
const double RECT_LL_Y = -3;
constexpr double RECT_CENTER_X = (RECT_UR_X + RECT_LL_X) / 2;
constexpr double RECT_CENTER_Y = (RECT_UR_Y + RECT_LL_Y) / 2;

const double CIRCLE_CENTER_X = 1;
const double CIRCLE_CENTER_Y = 0;
constexpr double CIRCLE_RADIUS = 2;
constexpr double CIRCLE_RADIUS_SQ = CIRCLE_RADIUS * CIRCLE_RADIUS;

const double TRIANGLE_P_X = 4;
const double TRIANGLE_P_Y = -3;
const double TRIANGLE_Q_X = 8;
const double TRIANGLE_Q_Y = -3;
const double TRIANGLE_R_X = 4;
const double TRIANGLE_R_Y = 1;
constexpr double TRIANGLE_CENTER_X = (TRIANGLE_P_X + TRIANGLE_Q_X + TRIANGLE_R_X) / 3;
constexpr double TRIANGLE_CENTER_Y = (TRIANGLE_P_Y + TRIANGLE_Q_Y + TRIANGLE_R_Y) / 3;

bool inBounds(double val, double min, double max) {
    return (val >= min) && (val <= max);
}

bool inRect(const double x, const double y) {
    return inBounds(x, RECT_LL_X, RECT_UR_X) && inBounds(y, RECT_LL_Y, RECT_UR_Y);
}

bool inCircle(const double x, const double y) {
    return (x - CIRCLE_CENTER_X) * (x - CIRCLE_CENTER_X) + y * y < CIRCLE_RADIUS_SQ; // doesn't include the rim
}

bool inA(const double x, const double y) {
    return inRect(x, y) && !inCircle(x, y);
}

// double slope(const double x1, const double x2, const double y1, const double y2) {
//     return (y2 - y1) / (x2 - x1);
// }

bool inTriangle(const double x, const double y) {
    return x >= TRIANGLE_P_X
        && y >= TRIANGLE_P_Y
        && x + y <= 5;
}

bool inB(const double x, const double y) {
    return inTriangle(x, y);
}

bool isValid(const double x, const double y) {
    return inA(x, y) || inB(x, y);
}

int main() {
    short validPositionsEntered = 0;
    
    double x, y;
    while (validPositionsEntered != 10) {
        std::cin >> x >> y;
        if (isValid(x, y)) {
            ++validPositionsEntered;
        }    
    }
    
    return 0;
}