/* Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

int main() {
    int arr[100], n = 0, choice = 0, k;

    while (1) {
        printf("Enter an element: ");
        scanf("%d", &arr[n++]);
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    printf("Enter number of sub arrays: ");
    scanf("%d", &k);

    int sub[n];
    for (int i = 0; i < n; i++) sub[i] = 0;

    for (int i = 0; i <= n-k; i++) {
        for (int j = i; j < i+k; j++) {
            if (arr[j] < 0) {
                sub[i] = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i <= n-k; i++) printf("%d ", sub[i]);

    return 0;
}