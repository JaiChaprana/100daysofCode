/* Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, bin = 0, m = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    const int num = n;
    while (n != 0) {
        bin += (n % 2) * m;
        m *= 10;
        n /= 2;
    }

    int revBin = 0;

    printf("The Binary form of %d is %d!!", num, bin);
}
