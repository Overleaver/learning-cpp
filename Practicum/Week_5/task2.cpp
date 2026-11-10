#include <iostream>

bool isPrime(int n) {
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

int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int start, end;
    std::cin >> start >> end;
    
    if (start > end) {
        return 1;
    }

    std::cout << "Double primes:";
    for (unsigned i = start; i <= end; ++i) {
        if (isPrime(i) && isPrime(digitSum(i))) {
            std::cout << ' ' << i;
        }
    }
    std::cout << '\n';

    return 0;
}