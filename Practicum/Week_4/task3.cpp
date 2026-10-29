#include <iostream>

int main() {
    int x = 42;
    int* p1 = &x;
    int** p2 = &p1;

    std::cout << **p2 << '\n';
    
    return 0;
}