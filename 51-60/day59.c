/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
  int arr[100], n = 0, choice = 1;
  int k, sum = 0, maxSum = 0;

  while (1) {
    printf("Enter an element: ");
    scanf("%d", &arr[n++]);
    printf("Enter 0 to exit: ");
    scanf("%d", &choice);
    sum+=arr[n];
    if (choice == 0) break;
  }
  maxSum = sum;

  printf("Enter number of sub arrays: ");
  scanf("%d", &k);
  for (int i = 0; i <= n - k; i++) {
    int subSum = 0;
    for (int j = i; j < i+k; j++) {
      subSum += arr[j];
    }
    if (subSum > maxSum) maxSum = subSum;
  }

  printf("\n%d\n", maxSum);
  return 0;

}