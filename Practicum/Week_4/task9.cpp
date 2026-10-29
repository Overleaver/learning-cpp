#include <iostream>

bool isPrime(unsigned n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 || n == 3) {
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
    int a, b, c;
    unsigned points = 0, winningRows = 0;

    for (unsigned i = 0; i < 3; ++i) {
        do {
            std::cin >> a >> b >> c;
        } while (a <= 0 || b <= 0 || c <= 0);

        bool allPrime = isPrime(a) && isPrime(b) && isPrime(c);
        bool arithmeticProgression = a != b && (b - a == c - b);

        if (allPrime) {
            points += 10;
        }
        if (arithmeticProgression) {
            points += 5;
        }
        winningRows += allPrime || arithmeticProgression;

        std::cout << "Row " << (i + 1) << ": " << "Prime - " << allPrime << ", AP - " << arithmeticProgression << '\n';
    }

    std::cout << "Total points: " << points << '\n';
    std::cout << "Winning rows: " << winningRows << '\n';
    std::cout << (winningRows >= 2 ? "Jackpot!" : "") << '\n';

    return 0;
}