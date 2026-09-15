// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
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

	for (int i = 0; i < n; i++) {
		if (numbers[i] == target) {
			foundIndex = i;
			break;
		}
	}

	if (foundIndex == -1) {
		printf("-1\n");
	} else {
		printf("Found at index %d\n", foundIndex);
	}

	return 0;
}

