#include <stdio.h>

void diagonalAddition(int matrix[4][4]) {
    int diagonalSum1 = 0, diagonalSum2 = 0;

    for (int i = 0; i < 4; i++) {
        diagonalSum1 += matrix[i][i];
        diagonalSum2 += matrix[i][3 - i];
    }

    printf("Diagonal Sum 1: %d\n", diagonalSum1);
    printf("Diagonal Sum 2: %d\n", diagonalSum2);
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    diagonalAddition(matrix);

    return 0;
}