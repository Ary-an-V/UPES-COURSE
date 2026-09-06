//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, numDigits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    lastDigit = num % 10;
    firstDigit = num / (int)pow(10, numDigits - 1);

    // remove old first and last digit, then insert swapped ones
    int middle = (num % (int)pow(10, numDigits - 1)) / 10;
    int result = firstDigit;

    temp = middle;
    int middleDigits = numDigits - 2;
    for (int i = 0; i < middleDigits; i++) {
        // rebuild middle digits in order
    }

    result = lastDigit;
    result = result * (int)pow(10, numDigits - 2) + middle;
    result = result * 10 + firstDigit;

    printf("%d\n", result);

    return 0;
}