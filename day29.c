/* Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe given array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    int sum = 0;
    printf("\nThe sum of given array is: ");
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\t%d", sum);
}
