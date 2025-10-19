/* Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    const int original = n;

    int sum = 0;
    while (n != 0) {
        int factorial = 1;
        for (int i = 1; i <= n % 10; i++) {
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }

    if (sum == original) {
        printf("It is a strong number!!");
    } else {
        printf("It is not a strong number!!");
    }
}
