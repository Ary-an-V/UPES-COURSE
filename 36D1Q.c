// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			printf("%d", matrix[row][column]);
			if (column < columns - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

