//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int i = 1;
int n,s;
int main() {
    printf("Input the number: ");
    scanf("%d", &n);
    while(i<n+1) {
        s +=i;
        i++; 
    }
    printf("Sum of n natural no. is %d\n", s);
    return 0;
}