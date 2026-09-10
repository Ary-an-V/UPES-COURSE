//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main(void) {
	int n;
	int sum = 0;

    printf("Input: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int element;
		scanf("%d", &element);
		sum += element;
	}

	printf("%d\n", sum);

	return 0;
}

