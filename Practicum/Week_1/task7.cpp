#include <iostream>

int main() {
    int a, b;
    std::cout << "a, b = ";
    std::cin >> a >> b;
    
    std::cout << "The product of " << a << " and " << b << " is: " << a * b << '\n';
    
    return 0;
}