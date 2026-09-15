// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main(void) {
	int rows;
	int columns;

	printf("Input: ");
	scanf("%d %d", &rows, &columns);
	long long rowSums[rows];

	for (int row = 0; row < rows; row++) {
		rowSums[row] = 0;
		for (int column = 0; column < columns; column++) {
			int element;
			scanf("%d", &element);
			rowSums[row] += element;
		}
	}

	for (int row = 0; row < rows; row++) {
		printf("%lld", rowSums[row]);
		if (row < rows - 1) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

