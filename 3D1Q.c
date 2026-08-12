//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
float a;
int main() {
    printf("Input: ");
    scanf("%f", &a);
    float f = (a*((float)9/5)) + 32;
    printf("Output %f", f);
    return 0;
}