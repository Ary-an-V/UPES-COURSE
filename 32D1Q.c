// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main(void) {
	int firstSize;
	int secondSize;

	printf("Input: ");
	scanf("%d", &firstSize);
	int firstArray[firstSize];

	for (int i = 0; i < firstSize; i++) {
		scanf("%d", &firstArray[i]);
	}

	scanf("%d", &secondSize);
	int secondArray[secondSize];

	for (int i = 0; i < secondSize; i++) {
		scanf("%d", &secondArray[i]);
	}

	int mergedArray[firstSize + secondSize];
	for (int i = 0; i < firstSize; i++) {
		mergedArray[i] = firstArray[i];
	}
	for (int i = 0; i < secondSize; i++) {
		mergedArray[firstSize + i] = secondArray[i];
	}

	for (int i = 0; i < firstSize + secondSize; i++) {
		printf("%d", mergedArray[i]);
		if (i < firstSize + secondSize - 1) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}

