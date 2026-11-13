#include <iostream>

bool isDifferent(int n) {
    if (n < 0) {
        return false;
    }

    bool isEven = (n % 10) % 2 == 0;
    n /= 10;

    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        bool parity = digit % 2 == 0;
        if (parity == isEven) {
            return false;
        }
        isEven = parity;
    }
    return true;
}

int main () {
    int a, b;
    std::cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (isDifferent(i)) {
            sum += i;
        }
    }
    std::cout << "Sum of different numbers: " << sum << '\n';
    
    return 0;
}