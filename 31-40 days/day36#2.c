/* Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    int rows, cols, sum = 0;
    printf("Enter the number of rows: \t");
    scanf("%d", &rows);
    printf("Enter the number of columns: \t");
    scanf("%d", &cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element of row %d and column %d: \t", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("\nThe given matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the given matrix is: %d", sum);
    return 0;
}
