#include <iostream>

int main() {
    int value = 100;
    int* ptr = &value;
    
    std::cout << *ptr << '\n';

    return 0;
}