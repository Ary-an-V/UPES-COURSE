//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main(void) {
    int rows, columns;
    printf("Input: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int distinct = 1;

    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            scanf("%d", &matrix[row][column]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

