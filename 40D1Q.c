//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main(void) {
	int rows, columns;
	printf("Input: ");
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			scanf("%d", &matrix[row][column]);
		}
	}

	int first_value = 1;
	for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++) {
		for (int row = 0; row < rows; row++) {
			int column = diagonal - row;
			if (column >= 0 && column < columns) {
				if (!first_value) {
					printf(" ");
				}
				printf("%d", matrix[row][column]);
				first_value = 0;
			}
		}
	}
	printf("\n");

	return 0;
}

