// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("Enter first number: ");
	scanf("%d", &n);

	if (n != 0) {
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
	} else {
		printf("Enter valid numbers\n");
	}

	return 0;
}
