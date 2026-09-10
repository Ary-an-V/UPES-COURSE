//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main(void) {
	int n;
	int element;
	int even = 0;
	int odd = 0;

    printf("Input: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &element);

		if (element % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}

	printf("Even=%d, Odd=%d\n", even, odd);

	return 0;
}