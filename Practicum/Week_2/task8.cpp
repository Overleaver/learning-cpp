#include <iostream>

int main() {
    const double surcharge = 5.00;

    int kWh;
    std::cout << "Enter a non-negative real number: ";
    std::cin >> kWh;

    double tax = 0.0;

    if (kWh <= 100.0) {
        tax = 100 * 0.10;
    }
    else if (kWh <= 250.0) {
        tax = 100 * 0.10 + (kWh - 100) * 0.20;
    }
    else {
        tax = 100 * 0.10 + 150 * 0.20 + (kWh - 250) * 0.35;
    }
    tax += surcharge;

    std::cout << tax << " lv.\n";

    return 0;
}