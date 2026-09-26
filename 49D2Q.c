//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char name[200];
	char *words[50];
	int word_count = 0;

	printf("Input: ");
	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 1;
	}

	char *word = strtok(name, " \t\r\n");
	while (word != NULL && word_count < 50) {
		words[word_count++] = word;
		word = strtok(NULL, " \t\r\n");
	}

	printf("Output: ");
	for (int i = 0; i < word_count - 1; i++) {
		printf("%c.", words[i][0]);
	}

	if (word_count > 0) {
		if (word_count > 1) {
			printf(" ");
		}
		printf("%s", words[word_count - 1]);
	}

	printf("\n");
	return 0;
}

