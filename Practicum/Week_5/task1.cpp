#include <iostream>

unsigned euclidean(int a, int b) {
    unsigned temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned a, b, c, d;
    do {
        std::cin >> a >> b >> c >> d;
    } while (a < 0 || b < 0 || c < 0 || d < 0);

    unsigned gcd = euclidean(a, b);
    gcd = euclidean(gcd, c);
    gcd = euclidean(gcd, d);

    std::cout << "GCD: " << gcd << '\n';

    return 0;
}