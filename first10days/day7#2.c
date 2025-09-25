// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char a;
    printf("Please enter a character: ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            printf("It is a vowel");
        } else {
            printf("It is a consonant!");
        }
    } else if (a >= 97 && a <= 122) {
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("It is a vowel");
        } else {
            printf("It is a consonant!");
        }
    } else {
        printf("Please enter a valid number!");
    }

    return 0;
}
