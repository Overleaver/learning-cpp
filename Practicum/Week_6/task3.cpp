#include <iostream>

//...

void moveRight(int arr[], int len, int k) {
    int result[len];
    for (unsigned i = 0; i < len; ++i) {
        result[(i + k) % len] = arr[i];
    }

    for (unsigned i = 0; i < len; ++i) {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    unsigned n = 0;
    std::cin >> n;
    
    int arr[n];
    for (unsigned i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        arr[i] = num;
    }

    int k = 0;
    std::cin >> k;

    moveRight(arr, n, k);

    return 0;
}