/* Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char c[100],cWv[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    int j = 0;

    for (int i = 0; c[i] != '\0'; i++) {
        const int charCurr = tolower(c[i]);
        if (charCurr == 'a' || charCurr == 'e' || charCurr == 'i' || charCurr == 'o' || charCurr == 'u') {
            continue;
        }
        cWv[j] = c[i];
        j++;
    }
    cWv[j] = '\0';

    printf("The string without vowels is: \n");
    printf("%s", cWv);

    return 0;
}
