//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.22

*/
#include <stdio.h>
#include <math.h>

int P,T; float R;

int main() {
    printf("Enter the principle amount, Rate of interest per yr, Time(in years) (Separated by spaces): ");
    scanf("%d %f %d", &P, &R, &T);
    float SI = (P*R*T)/100;
    float A = P*pow(1+(R/100), T);
    float CI = A-P;
    printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}