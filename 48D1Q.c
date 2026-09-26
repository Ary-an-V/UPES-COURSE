//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char first[100], second[100], doubled[200];

	printf("Input: ");
	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL) {
		return 1;
	}

	first[strcspn(first, "\r\n")] = '\0';
	second[strcspn(second, "\r\n")] = '\0';

	strcpy(doubled, first);
	strcat(doubled, first);

	if (strlen(first) == strlen(second) && strstr(doubled, second) != NULL) {
		printf("Output: Rotation\n");
	} else {
		printf("Output: Not rotation\n");
	}

	return 0;
}

