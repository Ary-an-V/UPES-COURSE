// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main(void) {
	int n;
	int element;

	printf("Input: ");
	scanf("%d", &n);
	int array[n + 1];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d", &element);

	int insertionIndex = 0;
	while (insertionIndex < n && array[insertionIndex] <= element) {
		insertionIndex++;
	}

	for (int i = n; i > insertionIndex; i--) {
		array[i] = array[i - 1];
	}
	array[insertionIndex] = element;

	for (int i = 0; i <= n; i++) {
		printf("%d", array[i]);
		if (i < n) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

