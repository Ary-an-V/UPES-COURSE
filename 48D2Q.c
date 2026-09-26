//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

static void reverse_word(char *word, size_t start, size_t end) {
	while (start < end) {
		char temporary = word[start];
		word[start] = word[end];
		word[end] = temporary;
		start++;
		end--;
	}
}

int main(void) {
	char sentence[200];
	size_t start;

	printf("Input: ");
	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 1;
	}

	sentence[strcspn(sentence, "\r\n")] = '\0';

	for (size_t i = 0; sentence[i] != '\0'; i++) {
		if (!isspace((unsigned char)sentence[i])) {
			start = i;
			while (sentence[i + 1] != '\0' &&
				   !isspace((unsigned char)sentence[i + 1])) {
				i++;
			}
			reverse_word(sentence, start, i);
		}
	}

	printf("Output: %s\n", sentence);
	return 0;
}

