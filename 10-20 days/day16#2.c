/* Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    const int original = n;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (rev == original) {
        printf("The number is a palindrome!!");
    } else {
        printf("The number is not a palindrome!!");
    }

    return 0;
}
