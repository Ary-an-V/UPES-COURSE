//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int units, money;
int main() {
    printf("Input: ");
    scanf("%d", &units);
    if (units < 101) {
        money = units*5;
        printf("Fine: ₹%d", money);
    }
    else if (units < 201) {
        money = (units-100)*7 + 100*5;
        printf("Fine: ₹%d", money);
    }
    else if (units <301) {
        money = (units-200)*10 + 100*7 + 100*5;
        printf("Fine: ₹%d", money);
    }
    else {
        money = (units-300)*12 + 100*10 + 100*7 + 100*5;
        printf("Membership Cancelled");
    }
    return 0;
}