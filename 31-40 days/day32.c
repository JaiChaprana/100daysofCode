/* Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

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
    int n2;
    printf("Enter the size of your second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    for (int i = 0; i < n2; i++) {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nThe given array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nThe second array is: \n");
    for (int i = 0; i < n2; i++) {
        printf("%d\t", arr2[i]);
    }

    // MERGING
    printf("\n The merged array is: \n");
    for (int i = 0; i < n + n2; i++) {
        if (i < n) {
            printf("%d\t", arr[i]);
        } else {
            printf("%d\t", arr2[i - n]);
        }
    }
}
