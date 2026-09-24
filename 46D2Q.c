//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[26] = {0};
    int i;

    printf("Input: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (seen[index]) {
                printf("Output: %c\n", str[i]);
                return 0;
            }
            seen[index] = 1;
        }
    }

    printf("Output: No repeating lowercase alphabet found\n");
    return 0;
}

