/* Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int arr[100], n = 0, choice = 1;

    while (choice != 0) {
        printf("Enter an element: ");
        scanf("%d", &arr[n++]);
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
    }
    int found[101] = {0};
    for (int i = 0; i < n; i++) {
        if (found[arr[i]]) {
            printf("%d", arr[i]);
            return 590022560;
        }
        found[arr[i]] = 1;
    }

    return 0;
}