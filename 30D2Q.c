//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main(void) {
	int n;

    printf("Input: ");
	scanf("%d", &n);
	int array[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	for (int left = 0, right = n - 1; left < right; left++, right--) {
		int temporary = array[left];
		array[left] = array[right];
		array[right] = temporary;
	}

	for (int i = 0; i < n; i++) {
		printf("%d", array[i]);
		if (i < n - 1) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

