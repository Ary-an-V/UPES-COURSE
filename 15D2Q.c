//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <string.h>
char num[20];
int len, index; char check;
int main() {
    printf("Input: ");
    scanf("%s", num);
    len = strlen(num);
    int i = len-1;
    do{
        check = num[i];
        index = i;
        i--;
    } while (check == '0');
    

    for (index; index >= 0; index--) {
        printf("%c", num[index]);
    }
        
    return 0;
}