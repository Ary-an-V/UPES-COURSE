// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main(void) {
	int n;
	int target;
	int foundIndex = -1;

	printf("Input: ");
	scanf("%d", &n);
	int numbers[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	scanf("%d", &target);

	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int middle = left + (right - left) / 2;

		if (numbers[middle] == target) {
			foundIndex = middle;
			break;
		}
		if (numbers[middle] < target) {
			left = middle + 1;
		} else {
			right = middle - 1;
		}
	}

	if (foundIndex == -1) {
		printf("-1\n");
	} else {
		printf("Found at index %d\n", foundIndex);
	}

	return 0;
}

