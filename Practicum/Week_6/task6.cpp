#include <iostream>

void transpose(int* mat, unsigned rows, unsigned cols) {
    int result[cols][rows];
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            result[i, j]
        }
    }
}

int main() {
    unsigned rows, cols;
    std::cin >> rows >> cols;

    int mat[rows][cols];
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            int val;
            std::cin >> val;
            mat[i][j] = val;
        }
    }

    std::cout << '\n';

    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}