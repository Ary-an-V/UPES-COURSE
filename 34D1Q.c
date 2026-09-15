// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main(void) {
	int n;
	int position;
	int element;

	printf("Input: ");
	scanf("%d", &n);
	int array[n + 1];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d %d", &position, &element);

	for (int i = n; i > position; i--) {
		array[i] = array[i - 1];
	}
	array[position] = element;

	for (int i = 0; i <= n; i++) {
		printf("%d", array[i]);
		if (i < n) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

