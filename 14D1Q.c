//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int n,m = 0;
int main() {
    printf("Input: ");
    scanf("%d", &n);

    for(int i = 1; i <= n*2; i += 2) {
        m += i;
    }
    printf("Output: %d", m);
    return 0;
}