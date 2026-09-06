//Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int rows = 13;

    for (int i = 1; i <= rows; i++) {
        if(i == 2 || i == 6 || i == 12 || i == 16) {
            printf("\n");
        }
        else{
            printf("*\n");
        }
    }
    return 0;
}