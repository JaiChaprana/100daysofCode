/* Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    int rows, cols, sum = 0;
    printf("Enter the number of rows: \t");
    scanf("%d", &rows);
    printf("Enter the number of columns: \t");
    scanf("%d", &cols);
    int rowSum[rows] = {0};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element of row %d and column %d: \t", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
        rowSum[i] = sum;
    }

    printf("\nThe given matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d is: %d", i + 1, rowSum[i]);
    }
    return 0;
}
