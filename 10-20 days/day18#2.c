/* Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/


#include <limits.h>
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    int hcf = INT_MIN;

    for (int i = 1; n1 > n2 ? i <= n2 : i <= n1; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            if (i > hcf) {
                hcf = i;
            }
        }
    }

    printf("The HCF of %d and %d is %d !!", n1, n2, hcf);

    return 0;
}
