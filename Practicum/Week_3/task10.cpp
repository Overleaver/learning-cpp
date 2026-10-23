#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (unsigned i = 5; i <= n / i; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned n;
    do {
        std::cout << "Enter an even integer (n >= 4): ";
        std::cin >> n;
    } while (n < 4 || n % 2 != 0);

    for (unsigned a = 3, b; a <= n / 2; a += 2) {
        if (isPrime(a)) {
            b = n - a;
            if (isPrime(b)) {
                std::cout << a << " + " << b << " = " << n << '\n';
            }
        }
    }
    
    return 0;
}