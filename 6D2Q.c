//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int e;

int main() {
    printf("Enter Your number: ");
    scanf("%d", &e);

    if(e>0) {
        printf("positive");
    }
    else if (e < 0) {
        printf("negative");
    }
    else {
        printf ("zero");
    }
    return 0;
}