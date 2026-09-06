//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, og, remainder, n = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og = num;

    // count number of digits
    while (num != 0) {
        num /= 10;
        n++;
    }

    num = og;

    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, n);
        num /= 10;
    }

    if (sum == og)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}