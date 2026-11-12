#include <iostream>

constexpr size_t MAX_SIZE = 128;

void arrayInput(int mat[][MAX_SIZE], const size_t rows) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < rows; ++j) {
            std::cin >> mat[i][j];
        }
    }
}

bool isMagicSquare(const int mat[][MAX_SIZE], const size_t rows, int& magicSum) {
    int mainDiagSum = 0, secDiagSum = 0;
    for (size_t i = 0; i < rows; ++i) {
        mainDiagSum += mat[i][i];
        secDiagSum += mat[i][rows - i - 1];
    }

    if (mainDiagSum != secDiagSum) {
        return false;
    }

    for (size_t i = 0; i < rows; ++i) {
        int rowSum = 0, colSum = 0;
        for (size_t j = 0; j < rows; ++j) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != mainDiagSum || colSum != mainDiagSum) {
            return false;
        }
    }
 
    magicSum = mainDiagSum;
    return true;
}

int main() {
    size_t rows;
    do {
        std::cin >> rows;
    } while (rows < 2);

    int mat[MAX_SIZE][MAX_SIZE];
    arrayInput(mat, rows);

    int magicSum = 0;
    if (isMagicSquare(mat, rows, magicSum)) {
        std::cout << "Mat is a magic square. (Magic sum: " << magicSum << ")\n"; 
    }
    else {
        std::cout << "Mat is NOT a magic square.\n";
    }
    
    return 0;
}