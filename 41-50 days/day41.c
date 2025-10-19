/* Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/

#include<stdio.h>

int main(){
    char c[100];

    printf("Enter a string: \t");
    fgets(c, sizeof(c), stdin);

    int length=0;

    for (int i=0; c[i]!='\0'; i++)
        if (c[i]!=' ')
            length++;

    printf("Length of the given string is: %d\n",length);

    return 0;
}