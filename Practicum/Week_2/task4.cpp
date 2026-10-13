#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a symbol: ";
    std::cin >> ch;

    bool isLowerLetter = ch >= 'a' && ch <= 'z';
    bool isCapitalLetter = ch > 'A' && ch <= 'Z';
    bool isNumber = ch >= '0' && ch <= '9';

    if (isLowerLetter) {
        std::cout << char(ch + 'A' - 'a');
    }
    else if (isCapitalLetter) {
        std::cout << char(ch + 'a' - 'A');
    }
    else if (isNumber) {
        std::cout << ch;
    }
    else {
        std::cout << "Special symbol";
    }
    std::cout << '\n';
    
    return 0;
}