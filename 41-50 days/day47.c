// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[100], c2[100];

    printf("Enter first string: ");
    fgets(c, sizeof(c), stdin);

    printf("Enter second string to check anagram for: ");
    fgets(c2, sizeof(c2), stdin);

    c[strcspn(c, "\n")] = '\0';
    c2[strcspn(c2, "\n")] = '\0';

    if (strlen(c) != strlen(c2)) {
        printf("Not anagrams!");
        return 0;
    }

    for (int i = 0; i < strlen(c); i++) {
        int found = 0;
        for (int j = 0; j < strlen(c2); j++) {
            if (c[i] == c2[j]) {
                c2[j] = ' ';
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Not anagrams!");
            return 0;
        }
    }

    printf("Anagrams!");
    return 0;
}
