#include <iostream>

int main() {
    int a, b;
    char ch;
    std::cout << "Enter two real numbers and an arithmetic operator ('+','-','*','/'): ";
    std::cin >> a >> b >> ch;

    int result;
    switch (ch) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b == 0) {
                std::cout << "Error: Division by 0\n";
                return 0;
            }
            result = a / b;
            break;
        defalt: 
            std::cout << "Error: Wrong input\n";
            return 0;
    }   

    std::cout << result << '\n';
    
    return 0;
}