/* Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n;

    float sum = 0.0;

    printf("Enter the terms to check the series upto: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (2 * i);
    }

    printf("The sum of the series is: %.4f", sum);

    return 0;
}
