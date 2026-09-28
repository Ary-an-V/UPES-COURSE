//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[1000];

	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 1;
	}

	input[strcspn(input, "\r\n")] = '\0';
	int length = (int)strlen(input);
	int first = 1;

	for (int start = 0; start < length; start++) {
		for (int end = start + 1; end <= length; end++) {
			if (!first) {
				printf(",");
			}
			printf("%.*s", end - start, input + start);
			first = 0;
		}
	}

	printf("\n");
	return 0;
}

