/* Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the terms to check the sum of the series upto: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += (2 * i) / (4 * i - 1);
    }

    printf("The sum of the series is: %.4f", sum);

    return 0;
}
