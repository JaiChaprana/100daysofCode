// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>


int findSmallerLargerthanX(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        const int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            printf("Found the target at location: %d", mid);
            return mid;
        } else if (arr[mid] > target && arr[mid - 1] < target) {
            printf("Found the target at %d", mid);
            return mid;
        } else if (arr[mid] < target && arr[mid + 1] > target) {
            printf("Found the target at %d", mid);
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    const int n = sizeof(arr) / sizeof(arr[0]);
    const int target = 2;

    const int x = findSmallerLargerthanX(arr, n, target);
    printf("%d\n", x);
}
