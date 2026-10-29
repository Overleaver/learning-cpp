#include <iostream>

void badSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << "Initial: " << "a=" << a << ", b=" << b << '\n';
    badSwap(a, b);
    std::cout << "After badSwap: " << "a=" << a << ", b=" << b << '\n';
    swap(a, b);
    std::cout << "After swap: " << "a=" << a << ", b=" << b << '\n';
    
    return 0;
}