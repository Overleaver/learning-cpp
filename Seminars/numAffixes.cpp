#include <iostream>

unsigned reverse(unsigned n) {
    unsigned rev = 0;
    while (n != 0) {
        (rev *= 10) += n % 10;
        n /= 10;
    }
    return rev;
}

// unsigned numLen(unsigned n) {
//     unsigned len = 0;
//     while (n != 0) {
//         len++;
//         n /= 10;
//     }
//     return len;
// }

bool isPrefix(unsigned n, unsigned m);
bool isInfix(unsigned n, unsigned m);
bool isSuffix(unsigned n, unsigned m);

int main() {
    unsigned n, m;
    std::cin >> n >> m;
    
    std::cout << std::boolalpha << "Is prefix: " << isPrefix(n, m) << '\n';
    std::cout << std::boolalpha << "Is infix: " << isInfix(n, m) << '\n';
    std::cout << std::boolalpha << "Is suffix: " << isSuffix(n, m) << '\n';

    return 0;
}

bool isPrefix(unsigned n, unsigned m) {
    while (n != 0) {
        if (n == m) {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool isInfix(unsigned n, unsigned m) {
    while (n != 0) {
        if (isSuffix(n, m)) {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool isSuffix(unsigned n, unsigned m) {
    while (m != 0) {
        if ((n % 10) != (m % 10)) {
            return false;
        }
        n /= 10;
        m /= 10;
    }
    return true;
}