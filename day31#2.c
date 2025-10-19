/* Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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

    int start = 0, end = n - 1;
    while (start < end) {
        const int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("\nThe reversed array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}
