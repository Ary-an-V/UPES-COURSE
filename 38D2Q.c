//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int rows, columns;
    printf("Input: ");
    scanf("%d %d", &rows, &columns);

    if (rows != columns) {
        printf("False\n");
        return 0;
    }

    int matrix[rows][columns];

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &matrix[row][column]);
        }
    }

    int isSymmetric = 1;

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            if (matrix[row][column] != matrix[column][row]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

