//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>
void main(){
    printf("Enter String\n");
    char string[30];
    fgets(string,sizeof(string),stdin);
    int count = sizeof(string)/sizeof(string[0]);
    for (int i = 0; i < count; i++)
    {
        if (string[i]==32){
            string[i]='-';
        }
    }
    printf("%s",string);
    
}