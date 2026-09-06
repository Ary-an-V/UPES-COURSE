//Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // print leading spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // print stars
        for (int j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}