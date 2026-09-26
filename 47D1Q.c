//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char first[100], second[100];
	int frequency[256] = {0};

	printf("Input: ");
	if (fgets(first, sizeof(first), stdin) == NULL) {
		return 1;
	}

	if (fgets(second, sizeof(second), stdin) == NULL) {
		return 1;
	}

	first[strcspn(first, "\n")] = '\0';
	second[strcspn(second, "\n")] = '\0';

	for (int i = 0; first[i] != '\0'; i++) {
		frequency[(unsigned char)first[i]]++;
	}

	for (int i = 0; second[i] != '\0'; i++) {
		frequency[(unsigned char)second[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (frequency[i] != 0) {
			printf("Output: Not anagrams\n");
			return 0;
		}
	}

	printf("Output: Anagrams\n");
	return 0;
}

