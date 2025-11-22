/* Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int a[100], b[100], m = 0, n = 0, choice = 1;
    while (1) {
        printf("Enter element %d for array1: ", m + 1);
        scanf("%d", &a[m]);
        if (a[m] < a[m-1] && m != 0) {
            printf("Enter in an ascending order only!");
            continue;
        }
        m++;
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    while (1) {
        printf("Enter element %d for array2: ", n+1);
        scanf("%d", &b[n]);
        if (b[n] < b[n-1] && n != 0) {
            printf("Enter in an ascending order only!");
            continue;
        }
        n++;
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    int merged[200];
    int i = 0, j = 0, k = 0;
    while (i < m && j <n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int g = 0; g < k; g++) {
        printf("%d ", merged[g]);
    }

    return 0;
}