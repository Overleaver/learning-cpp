#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void outputUniquePairs(const int arr[], const int size, const int target) {
    bool found = false;
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[i] * arr[j] == target) {
                std::cout << '(' << arr[i] << ", " << arr[j] << ")\n";
                found = true;
            }
        }
    }
    if (!found) {
        std::cout << "No unique value pairs found\n";
    }
}

int main() {
    size_t n;
    std::cin >> n;
    
    int arr[MAX_SIZE];
    arrayInput(arr, n);

    int target;
    std::cin >> target;

    outputUniquePairs(arr, n, target);

    return 0;
}