/* Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char c[100];
    printf("Enter a string: \t");
    fgets(c, 100, stdin);

    int vowelCount=0, consonants=0;
    for (int i=0;c[i]!='\0';i++) {
        if (c[i]!= ' ') {
            if (tolower(c[i]=='a') || tolower(c[i]=='e') || tolower(c[i]=='i' || tolower(c[i]=='o') || tolower(c[i]=='u'))) {
                vowelCount++;
            } else {
                consonants++;
            }
        }
    }
    printf("Number of vowels: \t%d\n", vowelCount);
    printf("Number of consonants: \t%d\n", consonants);

    return 0;
}