// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[100],rev[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    char toFind;
    printf("Enter the character to find: ");
    scanf("%c",&toFind);

    int frequency = 0;

    for (int i=0;i<strlen(c);i++) {
        if (toFind == c[i]) {
            frequency++;
        }
    }

    if (frequency > 0)
        printf("This character has occured %d times!!", frequency);
    else
        printf("This character is not present in the given string");

    return 0;
}
