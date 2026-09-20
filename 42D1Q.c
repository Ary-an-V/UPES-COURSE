//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main(void) {
	int character;
	int vowels = 0;
	int consonants = 0;

	printf("Input: ");
	while ((character = getchar()) != '\n' && character != '\r' && character != EOF) {
		if ((character >= 'a' && character <= 'z') ||
			(character >= 'A' && character <= 'Z')) {
			if (character == 'a' || character == 'e' || character == 'i' ||
				character == 'o' || character == 'u' || character == 'A' ||
				character == 'E' || character == 'I' || character == 'O' ||
				character == 'U') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

	return 0;
}

