//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.6

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0, term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            term = 1.0;
        } else {
            term = (2.0 * i - 1) / (2.0 * i);
        }
        sum += term;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}