//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int a,b,c,d; float e;
int main() {
    printf("Enter your numbers (Separated By Spaces): ");
    scanf("%d%d", &a, &b);
    c = a+b;
    d = a*b;
    int f = a-b;
    printf("Your Sum is %d\n", c);
    printf("Your Diff is %d\n", f);
    printf("Your Product is %d\n", d);
    if (b == 0) {
        printf("Division is not defined\n");
    }
    else {
        e = (float)a/b;
        printf("Your Quotient is %f\n", e);
    }
    return 0;
}