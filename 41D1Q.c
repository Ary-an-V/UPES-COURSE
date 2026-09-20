//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main(void) {
	int character;
	int count = 0;

	printf("Input: ");
	while ((character = getchar()) != '\n' && character != '\r' && character != EOF) {
		count++;
	}

	printf("%d\n", count);

	return 0;
}

