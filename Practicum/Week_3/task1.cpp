#include <iostream>

int main(){
    int attempts = 0, number = 0;

    do {
        std::cout << "Enter an integer [1-100]: ";
        std::cin >> number;
        attempts++;
    } while(number < 1 || number > 100);
    
    std::cout << "Number: " << number << '\n';
    std::cout << "Attempts: " << attempts << '\n';
    
    return 0;
}