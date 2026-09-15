// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

void reverse(int array[], int left, int right) {
	while (left < right) {
		int temporary = array[left];
		array[left] = array[right];
		array[right] = temporary;
		left++;
		right--;
	}
}

int main(void) {
	int n;
	int k;

	printf("Input: ");
	scanf("%d", &n);
	int array[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d", &k);

	if (n > 0) {
		k %= n;
		reverse(array, 0, n - 1);
		reverse(array, 0, k - 1);
		reverse(array, k, n - 1);
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

