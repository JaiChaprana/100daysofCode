/* Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100], n = 0, k, choice = 1, max = INT_MIN;

    while (1) {
        printf("Enter an element: ");
        scanf("%d", &arr[n]);
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (arr[n] > max) max = arr[n];
        n++;
        if (choice == 0) break;
    }

    printf("Enter number of sub arrays: ");
    scanf("%d", &k);

    int maxSub[n];

    for (int i = 0; i <= n - k; i++) {
        const int temp = arr[i];
        for (int j = i; j < i+k; j++) {
            if (arr[j] > max) max = arr[j];
        }
        maxSub[i] = temp;
    }

    for (int i = 0; i <= n - k; i++) printf("%d ", maxSub[i]);

    return 0;
}