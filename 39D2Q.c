//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main(void) {
    int rows, columns;
    int diagonalSum = 0;

    printf("Input: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &matrix[row][column]);
        }
    }

    for (int index = 0; index < rows && index < columns; index++) {
        diagonalSum += matrix[index][index];
    }

    printf("%d\n", diagonalSum);

    return 0;
}

