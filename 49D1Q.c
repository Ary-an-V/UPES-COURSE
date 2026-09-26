//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
	char name[200];
	int at_word_start = 1;

	printf("Input: ");
	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 1;
	}

	printf("Output: ");
	for (int i = 0; name[i] != '\0'; i++) {
		if (isspace((unsigned char)name[i])) {
			at_word_start = 1;
		} else if (at_word_start) {
			printf("%c.", name[i]);
			at_word_start = 0;
		}
	}

	printf("\n");
	return 0;
}

