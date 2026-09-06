//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int r;
#define PI 3.14
int main() {
    printf("Enter your radius: ");
    scanf("%d", &r);
    float a = PI*r*r;
    printf("Area of the circle is %f\n", a);
    float b = 2*PI*r;
    printf("Circumference of the circle is %f\n", b);
    return 0;
}
