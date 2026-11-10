#include <iostream>

int main() {
    unsigned n;
    std::cout << "n: ";
    std::cin >> n;
    int arr[n];

    for (unsigned i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        arr[i] = num;
    }

    int target;
    std::cout << "target: ";
    std::cin >> target;

    bool found = false;

    // for (unsigned i = 0; i < n; ++i) {
    //     std::cout << arr[i] << ' ';
    // }
    // std::cout << '\n';
    // for (unsigned i = n; i > 0; --i) {
    //     std::cout << arr[i] << ' ';
    // }
    // return 0;

    for (unsigned i = n; i >= 0; --i) {
        for (unsigned j = 0; j < i; ++i) {
            // std::cout << "i:" << i << " j:" << j << '\n';
            // std::cout << "arr[i]:" << arr[i] << " arr[j]:" << arr[j] << '\n';
            // break;
            std::cout << arr[j] << " * " << arr[i] << " ?= " << target << '\n';
 
            // if (arr[i] * arr[j] == target) {
            //     // std::cout << '(' << arr[j] << ", " << arr[i] << ")\n"; 
            //     found = true;
            // }
        }
        break;
    }

    if (!found) {
        // std::cout << "No suitable pairs.";
    }
    
    return 0;
}