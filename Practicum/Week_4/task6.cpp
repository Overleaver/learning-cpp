#include <iostream>

int main() {
    char c = 'Z';
    int i = 42;
    double d = 3.14;
    
    char* pc = &c;
    int* pi = &i;
    double* pd = &d;

    std::cout << "sizeof(c):" << sizeof(c) << " sizeof(i):" << sizeof(i) << " sizeof(d):" << sizeof(d) << '\n';
    std::cout << "sizeof(pc):" << sizeof(pc) << " sizeof(pi):" << sizeof(pi) << " sizeof(pd):" << sizeof(pd) << '\n';

    /* 
        Every byte composing the OS has a uniquely indetifying address.
        Pointers are often represented in a hexidecimal format and have
        the same size in memory (commonly 8 bytes (64 bits) on a 64-bit OS)
        regardless of the data type of the variable whose address they're storing.
    */

    return 0;
}