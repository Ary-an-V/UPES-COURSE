// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main(void) {
	int rows;
	int columns;
	long long sum = 0;

	printf("Input: ");
	scanf("%d %d", &rows, &columns);

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			int element;
			scanf("%d", &element);
			sum += element;
		}
	}

	printf("%lld\n", sum);

	return 0;
}

