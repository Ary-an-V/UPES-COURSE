//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

void binary(int num) {
    if(num > 1) {
        binary(num/2);
    }
    printf("%d", num%2);
}

int num;
int main() {
    printf("Input: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}