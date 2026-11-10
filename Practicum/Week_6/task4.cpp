#include <iostream>

//...

void deduplicate(int arr[], unsigned len) {
    int result[len];
    unsigned newLen = len;
    for (unsigned i = 0; i < len; ++i) {
        result[i] = arr[i];
        for (unsigned j = i + 1; j < len; ++j) {
            if (arr[i] == arr[j]) {
                newLen--;
            }
        }
    }

    for (unsigned i = 0; i < newLen; ++i) {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    unsigned n;
    std::cin >> n;
    
    int arr[n];
    for (unsigned i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        arr[i] = num;
    }

    deduplicate(arr, n);
    
    return 0;
}