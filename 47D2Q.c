//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char sentence[200];
	char longest[200] = "";
	char *word;

	printf("Input: ");
	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 1;
	}

	word = strtok(sentence, " \t\r\n");
	while (word != NULL) {
		if (strlen(word) > strlen(longest)) {
			strcpy(longest, word);
		}
		word = strtok(NULL, " \t\r\n");
	}

	printf("Output: %s\n", longest);
	return 0;
}

