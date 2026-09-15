// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main(void) {
	int rows;
	int columns;

	printf("Input: ");
	scanf("%d %d", &rows, &columns);
	int matrix[rows][columns];

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			scanf("%d", &matrix[row][column]);
		}
	}

	for (int column = 0; column < columns; column++) {
		for (int row = 0; row < rows; row++) {
			printf("%d", matrix[row][column]);
			if (row < rows - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

