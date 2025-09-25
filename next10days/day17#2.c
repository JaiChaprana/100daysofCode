/* Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;

    if (n == 0 || n == 1) {
        printf("Not a prime!!");
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            count = 1;
            break;
        } else {
            count = 0;
        }
    }

    if (count == 0) {
        printf("The number is a prime!!");
    } else {
        printf("The number is not a prime!!");
    }

    return 0;
}
