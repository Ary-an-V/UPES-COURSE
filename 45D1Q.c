//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main(void)
{
	char string[1000];
	char target;
	int count = 0;
    printf("Input: ");
	fgets(string, sizeof(string), stdin);
	scanf(" %c", &target);

	for (int index = 0; string[index] != '\0'; index++)
	{
		if (string[index] == target)
		{
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}

