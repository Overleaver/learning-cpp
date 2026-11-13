#include <iostream>

constexpr size_t ROWS = 4;

bool isValidInput(const char c) {
    bool critOne = c == '-';
    bool critTwo = c >= 'a' && c <= 'z';
    return critOne || critTwo;
}

void arrayInput(char mat[][ROWS], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            do {
                std::cin >> mat[i][j];
            } while (!(isValidInput(mat[i][j])));
        }
    }
}

bool isLetter(const char c) {
    return c >= 'a' && c <= 'z';
}

size_t countValidWords(const char mat[][ROWS], const size_t rows, const size_t cols) {
    size_t validWords = 0;
    for (size_t i = 0; i < rows; ++i) {
        size_t rowLetters = 0;
        for (size_t j = 0; j < cols; ++j) {
            if (isLetter(mat[i][j])) {
                ++rowLetters;
            }
            else {
                if (rowLetters >= 3) {
                    ++validWords;
                }
                rowLetters = 0;
            }
        }
        if (rowLetters >= 3) {
            ++validWords;
        }
    }
    for (size_t j = 0; j < cols; ++j) {
        size_t colLetters = 0;
        for (size_t i = 0; i < rows; ++i) {
            if (isLetter(mat[i][j])) {
                ++colLetters;
            }
            else {
                if (colLetters >= 3) {
                    ++validWords;
                }
                colLetters = 0;
            }
        }
        if (colLetters >= 3) {
            ++validWords;
        }
    }
    return validWords;
}

int main() {
    char mat[ROWS][ROWS];
    arrayInput(mat, ROWS, ROWS);

    size_t validWords = countValidWords(mat, ROWS, ROWS);
    std::cout << "Valid words: " << validWords << '\n';
    
    return 0;
}