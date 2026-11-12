#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

void printMatrixBorder(const int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (int j = 0; j < cols; ++j) {
        std::cout << mat[0][j] << ' ';
    }
    for (int i = 1; i < rows; ++i) {
        std::cout << mat[i][cols - 1] << ' ';
    }
    for (int j = cols - 2; j >= 0; --j) {
        std::cout << mat[rows - 1][j] << ' ';
    }
    for (int i = rows - 2; i > 0; --i) {
        std::cout << mat[i][0] << ' ';
    }
    std::cout << '\n';
}

int main() {
    size_t rows, cols;
    do {
        std::cin >> rows >> cols;
    } while (rows < 2 || cols < 2);

    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows, cols);
    printMatrixBorder(mat, rows, cols);
}