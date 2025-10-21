// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    char word[100];
    char longest[100] = "";
    int maxLen = 0;

    int i = 0, j = 0;

    while (1) {
        if (c[i] != ' ' && c[i] != '\0') {
            word[j++] = c[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }

        if (c[i] == '\0')
            break;

        i++;
    }

    printf("The longest word is: %s", longest);

    return 0;
}
