//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
#include <ctype.h>
char u;
char p;
int main() {
    printf("Write a letter: ");
    scanf("%c", &u);
    p = tolower(u);
    if((int)p >= 97 && (int)p <= 122){
        if(p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u') {
        printf("Vowel");
    }
    else {
        printf("Consonent");
    }
    }
    else {
        printf("it is not an alphabet");
    }
    return 0;
}