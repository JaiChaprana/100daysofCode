/* Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    int pos = 0, neg = 0, zer = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zer++;
        }
        printf("%d\t", arr[i]);
    }

    printf("\n Total number of positive elements is: %d", pos);
    printf("\n Total number of negative elements is: %d", neg);
    printf("\n Total number of zero elements is: %d", zer);

    return 0;
}
