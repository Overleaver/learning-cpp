#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

char getSign(const int a) {
    return a >= 0 ? '+' : '-';
}

bool isDifferent(const int a, const int b) {
    return getSign(a) != getSign(b);
}

void outputDifferent(const int arr[], const int size) {
    for (size_t i = 0; i < size - 1; ++i) {
        if (isDifferent(arr[i], arr[i + 1])) {
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << '\n';
}

int main() {
    size_t n;
    do {
        std::cin >> n;
    } while (n < 1 || n > 100);

    int arr[MAX_SIZE];
    arrayInput(arr, n);

    outputDifferent(arr, n);

    return 0;
}