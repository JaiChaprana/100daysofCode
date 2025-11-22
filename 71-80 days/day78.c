/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Can't open this file!!");
        return 1;
    }

    int c, vowels = 0 , consonants = 0;
    while ((c=fgetc(fp)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d", vowels);
    printf("Consonants: %d", consonants);
    fclose(fp);
    return 0;
}