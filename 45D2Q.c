//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char string[1000];

    printf("Input: ");
	fgets(string, sizeof(string), stdin);

	for (int index = 0; string[index] != '\0'; index++)
	{
		unsigned char character = (unsigned char)string[index];

		if (isupper(character))
		{
			string[index] = (char)tolower(character);
		}
		else if (islower(character))
		{
			string[index] = (char)toupper(character);
		}
	}

	printf("%s", string);

	return 0;
}

