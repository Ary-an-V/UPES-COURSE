//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int a,b,c;
int main() {
    printf("Input both you numbers (separated by spaces): ");
    scanf("%d%d", &a, &b);
    c = a+b;
    printf("Sum of you numbers is %d", c);
    return 0;
}