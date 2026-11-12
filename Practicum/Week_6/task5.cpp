#include <iostream>

constexpr unsigned MAX_SIZE = 128;

void arrayInput(int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

/*
void longestSubsequence(const int arr[], const int size) {
    if (size == 0) {
        return;
    }

    unsigned currentLen = 1, longestLen = 1;
    int current[MAX_SIZE]{arr[0]}, longest[MAX_SIZE]{arr[0]};
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            current[currentLen++] = arr[i];
            if (currentLen > longestLen) {
                longestLen = currentLen;
                for (size_t j = 0; j < currentLen; ++j) {
                    longest[j] = current[j];
                }
            }
        }
        else {
            current[0] = arr[i];
            currentLen = 1;
        }
    }

    std::cout << "Longest length: " << longestLen << '\n';
    std::cout << "Longest Subsequence: ";
    for (size_t i = 0; i < longestLen; ++i) {
        std::cout << longest[i] << ' ';
    }
    std::cout << '\n';
}
*/

void longestSubsequence(int arr[], const int size) {
    unsigned currentLen = 1, maxLen = 1;
    unsigned bestStart = 0;

    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            currentLen++;
        }
        else {
            currentLen = 1;
        }

        if (currentLen > maxLen) {
            maxLen = currentLen;
            bestStart = i - currentLen + 1;
        }
    }

    std::cout << "Max length: " << maxLen << '\n';
    std::cout << "Longest subsequence: ";
    for (size_t i = 0; i < maxLen; ++i) {
        std::cout << arr[bestStart + i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    unsigned n;
    std::cin >> n;
    
    int arr[MAX_SIZE];
    arrayInput(arr, n);
 
    longestSubsequence(arr, n);
    
    return 0;
}