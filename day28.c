/* Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (!count) {
            printf("\n%d is a prime number\n", i);
        }
    }

    return 0;
}
