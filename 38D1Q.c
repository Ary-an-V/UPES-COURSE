//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main(void) {
    int rows, columns;

    printf("Input: ");
    scanf("%d %d", &rows, &columns);

    int firstMatrix[rows][columns];
    int secondMatrix[rows][columns];
    int sumMatrix[rows][columns];

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &firstMatrix[row][column]);
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &secondMatrix[row][column]);
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            sumMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            printf("%d", sumMatrix[row][column]);
            if (column < columns - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

