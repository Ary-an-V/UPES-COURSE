//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int a,b,c;
int main() {
    printf("Input numbers(Separated by Spaces): ");
    scanf("%d%d%d", &a, &b, &c);
    float disc = (float)pow(b, 2) - (float)(4*a*c);
    int quadr1 = (-b+sqrt(pow(b, 2) - (4*a*c)))/(2*a);
    int quadr2 = (-b-sqrt(pow(b, 2) - (4*a*c)))/(2*a);

    if(disc > 0) {
        printf("Roots are real and different: %d, %d", quadr1, quadr2);
    }
    else if (disc < 0)
    {
        printf("Roots are complex");
    }
    else {
        printf("Roots are real and same: %d, %d", quadr1, quadr2);
    }

    
    return 0;
}
