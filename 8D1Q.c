//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
char u;
int main() {
    printf("Enter the value: ");
    scanf("%c", &u);
    if ((int)u >= 65 && (int)u <= 90) {
        printf("Uppercase alphabet");
    }
    else if ((int)u >= 97 && (int)u <= 122) {
        printf("Lowercase alphabet");
    }
    else if ((int)u >= 48 && (int)u <= 57) {
        printf("Digit");
    }
    else if ((int)u >= 33 && (int)u <= 47 || (int)u >= 91 && (int)u <= 96 || (int)u >= 123 && (int)u <= 127 || (int)u >= 58 && (int)u <= 64) {
        printf("Special Character");
    }
    return 0;
}