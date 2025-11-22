/* Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100], n = 0, choice =1;

    while (1) {
        printf("Enter an element: ");
        scanf("%d", &arr[n++]);
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    int max = arr[0], maxest = arr[0];

    for (int i = 1; i < n; i++) {
        if (max + arr[i] > arr[i]) max += arr[i];
        else max = arr[i];

        if (max > maxest) maxest = max;
    }

    printf("The max sum of contiguous array is: %d", maxest);
}