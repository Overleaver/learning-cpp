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

/*
void rotateRight(int arr[], const int size, const int k) {
    if (size == 0) {
        return;
    }

    int temp[size];
    for (size_t i = 0; i < size; ++i) {
        temp[i] = arr[(i + k) % size];
    }
    for (size_t i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}
*/

void rotateRight(int arr[], const int size, int k) {
    if (size == 0) {
        return;
    }

    k %= size;
    for (size_t i = 0; i < k; ++i) {
        int last = arr[size - 1];
        for (size_t j = size - 1; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    unsigned n;
    std::cin >> n;

    int arr[MAX_SIZE];
    arrayInput(arr, n);

    unsigned k;
    std::cin >> k;
    
    rotateRight(arr, n, k);
    printArray(arr, n);

    return 0;
}