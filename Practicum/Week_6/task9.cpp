#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

void countValidRows(const int mat[][MAX_SIZE], const size_t rows, const size_t cols, const int k, const int n) {
    size_t validRows = 0;
    for (size_t i = 0; i < rows; ++i) {
        size_t kElements = 0;
        for (size_t j = 0; j < cols; ++j) {
            if (mat[i][j] % n == 0) {
                kElements++;
            }
        }
        if (kElements > k) {
            ++validRows;
        }
    }

    std::cout << "Valid rows: " << validRows << '\n';
}

int main() {
    size_t rows, cols;
    std::cin >> rows >> cols;

    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows, cols);

    int k, n;
    std::cin >> k >> n;

    countValidRows(mat, rows, cols, k, n);
    
    return 0;
}