//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <string.h>
void main (){
    char string[12];
    printf("Enter String\n");
    fgets(string, sizeof(string), stdin);
    printf("%s", string);
    int stringL = strlen(string);
    int space = 0;
    int digits = 0;
    int special = 0;

    for(int i = 0; i <= stringL; i++) {
        if ((string[i]>+65 && string[i]<=90) || (string[i]>=97 && string[i]<=122))
        {
            i++;
            continue;
        } else {
            if (string[i]==32)
            {
                space++;
            } else if (string[i]>=48 && string[i]<=57)
            {
                digits++;
            } else if (string[i]<32)
            {
                continue;
            } else{
                special++;
            }
        }
    }
       
        
    
    printf("space = %d, special = %d,digits =  %d",space,special,digits);
}