#include <iostream>

constexpr size_t MAX_SIZE = 1024;

void arrayInput(int arr[], const size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

bool betweenPair(int pairIndexArray[], const size_t size, const int indexToCheck) {
    bool lesser = false, greater = false;
    for (int i = 0; i < indexToCheck; ++i) {
        if (pairIndexArray[i] == 1) {
            lesser = true;
            break;
        }
    }
    for (int i = indexToCheck + 1; i < size; ++i) {
        if (pairIndexArray[i] == 1) {
            greater = true;
            break;
        }
    }
    return lesser && greater;
}

void getPairs(const int arr[MAX_SIZE], const size_t size, int pairIndexArray[]) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            int elementDiff = arr[j] - arr[i];
            int indexDiff = j - i;
            if (elementDiff == indexDiff) {
                pairIndexArray[i] = 1;
                pairIndexArray[j] = 1;
            }
        }   
    }
    bool found = false;
    for (size_t i = 0; i < size; ++i) {
        if (pairIndexArray[i] == 1 && betweenPair(pairIndexArray, size, i)) {
            std::cout << i << ' ';
            found = true;
        }
    }
    if (!found) {
        std::cout << "none";
    }
    std::cout << '\n';
}

// Alternatively: store the first and last pair-participating elements and check if the current element is between them

int main() {
    size_t n;
    do {
        std::cin >> n;
    } while (n > 1024);

    int arr[MAX_SIZE];
    arrayInput(arr, n);

    int pairIndexArray[MAX_SIZE]{0};
    getPairs(arr, n, pairIndexArray);

    return 0;
}