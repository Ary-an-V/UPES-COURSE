//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main(void) {
	int character;

	printf("Input: ");
	while ((character = getchar()) != '\n' && character != '\r' && character != EOF) {
		putchar(character);
		putchar('\n');
	}

	return 0;
}

