#include <iostream>

const unsigned MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const int rows, const int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

void printArray(const int mat[][MAX_SIZE], const int rows, const int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void transpose(int mat[][MAX_SIZE], const int rows, const int cols) {
    int transposed[MAX_SIZE][MAX_SIZE];
    for (size_t i = 0; i < cols; ++i) {
        for (size_t j = 0; j < rows; ++j) {
            transposed[i][j] = mat[j][i];
        }
    }
    printArray(transposed, cols, rows);
}

int main() {
    unsigned rows, cols;
    std::cin >> rows >> cols;

    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows, cols);
    transpose(mat, rows, cols);
    
    return 0;
}