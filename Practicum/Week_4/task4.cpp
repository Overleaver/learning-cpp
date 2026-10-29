#include <iostream>

int main() {
    int a = 15;
    int& ref = a;

    std:: cout << "a:  " << a << '\n';
    std:: cout << "ref:" << ref << '\n';
    std::cout << "address of a:  " << &a << '\n';
    std::cout << "address of ref:" << &ref << '\n';

    ref = 30;

    std::cout << "value of a after 'ref=30':" << a << '\n';
    
    return 0;
}