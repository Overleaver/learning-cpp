#include <iostream>

const double R1 = 0.10;
const double R2 = 0.20;
const double R3 = 0.35;
const double DE = 5.00;

int main() {
    int a;
    std::cout << "Enter a non-negative real number: ";
    std::cin >> a;

    double sum = 0.0;
    if (a > 250.0) {
        double exc = a - (a - 250.0);
        a -= exc;
        sum += exc * R3;
    }
    if (a > 100.0) {
        double exc = a - (a - 100.0);
        a -= exc;
        sum += exc * R2;
    }
    sum += a * R1 + DE;

    std::cout << sum << " lv.\n";

    // wrong output

    return 0;
}