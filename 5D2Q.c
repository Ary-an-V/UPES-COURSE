//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int t = 0;
int tempt;
int h;
int m;
int s;
int main() {
    printf("Input Time(in Seconds): ");
    scanf("%d", &t);
    if(t > 3600) {
        h = t/3600;
        tempt = t%3600;
        if(tempt > 60) {
            m = tempt/60; 
        }
        s = tempt%60;
    }
    printf("Time is %d:%d:%d", h, m, s);
    return 0;
}