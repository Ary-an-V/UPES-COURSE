//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int a,b;
int main() {
    printf("Enter the Length and Breadth (Separated by spaces)");
    scanf("%d%d", &a, &b);
    int c = a*b;
    printf("Area of the rectangle is %d\n", c);
    int d = 2*(a+b);
    printf("Perimeter of the Rectangle is %d\n", d);
    return 0;
}
