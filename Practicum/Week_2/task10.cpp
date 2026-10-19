#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter three real numbers: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "Every x is a solution\n";
            }
            std::cout << "Equation has no solution\n";
        }
        std::cout << "Linear equation: x = " << -(c / b) << '\n';
    }
    else {
        double D = std::sqrt(b * b - 4 * a * c);
        if (D > 0) {   
            double x1 = (-b + D) / (2 * a);
            double x2 = (-b - D) / (2 * a);        
            std::cout << "Quadratic equation: x1 = " << x1 << ", x2 = " << x2 << '\n';
        }
        else if (D == 0) {
            std::cout << "Quadration equation: x = " << -(b / (2 * a)) << '\n';
        }
        else {
            std::cout << "Equation has no real roots\n";
        }
    }

    return 0;
}