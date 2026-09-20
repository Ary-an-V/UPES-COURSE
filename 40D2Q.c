//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main(void) {
	int first_rows, shared_dimension;
	int second_rows, second_columns;

	printf("Input: ");
	scanf("%d %d", &first_rows, &shared_dimension);

	int first_matrix[first_rows][shared_dimension];
	for (int row = 0; row < first_rows; row++) {
		for (int column = 0; column < shared_dimension; column++) {
			scanf("%d", &first_matrix[row][column]);
		}
	}

	scanf("%d %d", &second_rows, &second_columns);

	int second_matrix[second_rows][second_columns];
	for (int row = 0; row < second_rows; row++) {
		for (int column = 0; column < second_columns; column++) {
			scanf("%d", &second_matrix[row][column]);
		}
	}

	for (int row = 0; row < first_rows; row++) {
		for (int column = 0; column < second_columns; column++) {
			int product = 0;
			for (int index = 0; index < shared_dimension; index++) {
				product += first_matrix[row][index] * second_matrix[index][column];
			}

			if (column > 0) {
				printf(" ");
			}
			printf("%d", product);
		}
		printf("\n");
	}

	return 0;
}

