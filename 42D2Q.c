//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main(void) {
	int character;

	printf("Input: ");
	while ((character = getchar()) != '\n' && character != '\r' && character != EOF) {
		if (character >= 'a' && character <= 'z') {
			character -= 'a' - 'A';
		}
		putchar(character);
	}
	putchar('\n');

	return 0;
}

