// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main(void) {
	char number[100];
	int digitCounts[10] = {0};

	printf("Input: ");
	scanf("%99s", number);

	for (int i = 0; number[i] != '\0'; i++) {
		if (number[i] >= '0' && number[i] <= '9') {
			digitCounts[number[i] - '0']++;
		}
	}

	int mostFrequentDigit = 0;
	for (int digit = 1; digit < 10; digit++) {
		if (digitCounts[digit] > digitCounts[mostFrequentDigit]) {
			mostFrequentDigit = digit;
		}
	}

	printf("%d\n", mostFrequentDigit);

	return 0;
}

