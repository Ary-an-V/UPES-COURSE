// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main(void) {
	int n;
	int largest = 0;
	int secondLargest = 0;
	int hasLargest = 0;
	int hasSecondLargest = 0;

	printf("Input: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int element;
		scanf("%d", &element);

		if (!hasLargest || element > largest) {
			if (hasLargest) {
				secondLargest = largest;
				hasSecondLargest = 1;
			}
			largest = element;
			hasLargest = 1;
		} else if (element < largest &&
			       (!hasSecondLargest || element > secondLargest)) {
			secondLargest = element;
			hasSecondLargest = 1;
		}
	}

	printf("%d\n", secondLargest);

	return 0;
}

