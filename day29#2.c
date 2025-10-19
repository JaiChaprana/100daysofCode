/* Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <limits.h>
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

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
        if (arr[i] <= min) {
            min = arr[i];
        }
    }

    printf("\nThe maximum element is: %d", max);
    printf("\nThe minimum element is: %d", min);

    return 0;
}
