/* Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    const int original = n;

    while (n != 0) {
        const int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original) {
        printf("The number is an armstrong number!!");
    } else {
        printf("The number is not an armstrong number!!");
    }
}
