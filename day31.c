/* Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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

    int toFind;
    printf("Enter the element you want to search the index for: ");
    scanf("%d", &toFind);

    for (int i = 0; i < n; i++) {
        if (arr[i] == toFind) {
            printf("\nFound at index %d\n", i);
        }
    }
}
