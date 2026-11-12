#include <iostream>

const unsigned MAX_SIZE = 128;

void arrayInput(int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
}

void deduplicate(int arr[], int& size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[j] == arr[i]) {
                for (size_t k = j; k < size - 1 ; ++k) {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    int arr[MAX_SIZE];
    arrayInput(arr, n);

    deduplicate(arr, n);
    
    std::cout << "New size: " << n << '\n';
    std::cout << "Deduplicated array: ";
    for (size_t i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    
    return 0;
}