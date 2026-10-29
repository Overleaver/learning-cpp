#include <iostream>

int main() {
    int* safe_ptr = nullptr;

    if (safe_ptr == nullptr) {
        std::cout << "safe_ptr is nullptr and can't be dereferenced.\n";
    }

    int a = 5;
    safe_ptr = &a;

    if (safe_ptr != nullptr) {
        std::cout << "safe_ptr points to:" << *safe_ptr << '\n';
    }
    
    return 0;
}