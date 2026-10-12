#include <iostream>

int main() {
    float a, b, temp; // or double
    std::cout << "Enter two real numbers: ";
    std::cin >> a >> b;

    std::cout << "Before swap: a = " << a << " b = " << b << '\n'; 
    temp = a;
    a = b;
    b = temp;
    std::cout << "After swap: a = " << a << " b = " << b << '\n'; 
    
    return 0;
}