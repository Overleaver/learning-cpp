#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

bool isMinInRow(const int mat[][MAX_SIZE], const size_t row, const size_t col, const size_t cols) {
    for (size_t i = 0; i < cols; ++i) {
        if (mat[row][col] > mat[row][i]) {
            return false;
        }
    }
    return true;
}
bool isMaxInRow(const int mat[][MAX_SIZE], const size_t row, const size_t col, const size_t cols) {
    for (size_t i = 0; i < cols; ++i) {
        if (mat[row][col] < mat[row][i]) {
            return false;
        }
    }
    return true;
}
bool isMinInCol(const int mat[][MAX_SIZE], const size_t row, const size_t col, const size_t rows) {
    for (size_t i = 0; i < rows; ++i) {
        if (mat[row][col] > mat[i][col]) {
            return false;
        }
    }
    return true;
}
bool isMaxInCol(const int mat[][MAX_SIZE], const size_t row, const size_t col, const size_t rows) {
    for (size_t i = 0; i < rows; ++i) {
        if (mat[row][col] < mat[i][col]) {
            return false;
        }
    }
    return true;
}

bool isSaddlePoint(const int mat[][MAX_SIZE], const size_t row, const size_t col, const size_t rows, const size_t cols) {
    bool critFirst = isMinInRow(mat, row, col, cols) && isMaxInCol(mat, row, col, rows);
    bool critSecond = isMaxInRow(mat, row, col, cols) && isMinInCol(mat, row, col, rows);
    return critFirst || critSecond;
}

void findSaddlePoints(const int mat[][MAX_SIZE], const size_t rows, const size_t cols) {
    bool found = false;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            if (isSaddlePoint(mat, i, j, rows, cols)) {
                std::cout << "Saddle point: " << mat[i][j] << " at (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }
    if (!found) {
        std::cout << "No saddle points found\n";
    }
}

int main() {
    size_t rows, cols;
    std::cin >> rows >> cols;

    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows, cols);

    findSaddlePoints(mat, rows, cols);
    
    return 0;
}