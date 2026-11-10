#include <iostream>

//...

int main() {
    unsigned n;
    std::cin >> n;
    
    int arr[n];
    for (unsigned i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        arr[i] = num;
    }

    int subseries[n](0);
    int longestSubseries[n](0);
    int emptyArr[n](0);

    unsigned len = 1, maxLen = 1;
    for (unsigned i = 0; i < n - 1; ++i) {
        if (arr[i] < arr[i+1]) {
            len++;
            subseries[i] = arr[i];
            if (len > maxLen) {
                maxLen = len;
                *longestSubseries = *subseries;
            }
        }
        else {
            len = 1;
            *subseries = *emptyArr;
        }
    }

    std::cout << "Max length: " << maxLen << '\n';
    std::cout << "Subseries: ";
    for (unsigned i = 0; i < n; ++i) {
        if (i > 0 && longestSubseries[i] == 0) {
            break;
        }
        std::cout << longestSubseries[i] << ' ';
    }
    std::cout << '\n';
    
    return 0;
}