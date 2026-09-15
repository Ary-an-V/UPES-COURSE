// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main(void) {
	int n;
	int position;

	printf("Input: ");
	scanf("%d", &n);
	int array[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d", &position);

	for (int i = position; i < n - 1; i++) {
		array[i] = array[i + 1];
	}

	for (int i = 0; i < n - 1; i++) {
		printf("%d", array[i]);
		if (i < n - 2) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

