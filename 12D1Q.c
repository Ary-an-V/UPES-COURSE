//Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days late: ₹6/day 
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int days, money;
int main() {
    printf("Input: ");
    scanf("%d", &days);
    if (days < 6) {
        money = days*2;
        printf("Fine: ₹%d", money);
    }
    else if (days < 11) {
        money = (days-5)*4 + 5*2;
        printf("Fine: ₹%d", money);
    }
    else if (days <31) {
        money = (days-10)*6 + 5*2 + 5*4;
        printf("Fine: ₹%d", money);
    }
    else {
        printf("Membership Cancelled");
    }
    return 0;
}