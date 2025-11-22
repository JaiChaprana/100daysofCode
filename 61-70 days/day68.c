/* Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int main() {
    int arr[100], n = 0, choice = 1, sum = 0, missing = 0;

    while (1) {
        printf("Enter an element: ");
        scanf("%d", &arr[n]);
        if (arr[n] < 0) {
            printf("Enter values 0 to n and exactly miss one value!");
            continue;
        }
        sum += arr[n];
        n++;
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    int found = 0;

    for (int i = 0; i <= n; i++) {
        missing+=i;
    }

    printf("The missing value is: %d", missing - sum);

    return 1;
}