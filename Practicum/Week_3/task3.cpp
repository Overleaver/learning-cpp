#include <iostream>

int main() {
    int n;
    
    do {
        std::cout << "Enter a natural number n: ";
        std::cin >> n;
    }
    while (n < 0);

    int first = 0, second = 1;
    std::cout << first;
    if (n == 0)
        return 0;
    std::cout << ", " << second;
    if (n == 1)
        return 0;

    std::cout << ", ";

    for (int i = 2; i < n; ++i) {
        int next = second;
        second += first;
        first = next;
        std::cout << second;

        if (n - 1 > i)
            std::cout << ", ";
    }
    
    return 0;
}