#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

void printArray(const int arr[], const size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void getRowMaximums(const int mat[][MAX_SIZE], const size_t rows, const size_t cols, int output[MAX_SIZE]) {
    for (size_t i = 0; i < rows; ++i) {
        int max = mat[i][0];
        for (size_t j = 0; j < cols; ++j) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        output[i] = max;
    }
}

void getColMaximums(const int mat[][MAX_SIZE], size_t rows, size_t cols, int output[MAX_SIZE]) {
    for (size_t i = 0; i < cols; ++i) {
        int max = mat[0][i];
        for (size_t j = 0; j < rows; ++j) {
            if (mat[j][i] > max) {
                max = mat[j][i];
            }
        }
        output[i] = max;
    }
}

int main() {
    size_t rows, cols;
    std::cin >> rows >> cols;
    
    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows, cols);
    
    int rowMaximums[MAX_SIZE];
    getRowMaximums(mat, rows, cols, rowMaximums);

    int colMaximums[MAX_SIZE];
    getColMaximums(mat, rows, cols, colMaximums);

    std::cout << "Row maximums: ";
    printArray(rowMaximums, rows);
    
    std::cout << "Column maximums: ";
    printArray(colMaximums, cols);

    return 0;
}