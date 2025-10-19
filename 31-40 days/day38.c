/* Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    int mat2[100][100];
    int sumMatrix[100][100];
    int rows, cols;
    printf("Enter the number of rows: \t");
    scanf("%d", &rows);
    printf("Enter the number of columns: \t");
    scanf("%d", &cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element of row %d and column %d for matrix 1: \t", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            printf("\n");
            printf("Enter element of row %d and column %d for matrix 2: \t", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);

            sumMatrix[i][j] = sumMatrix[i][j] + mat[i][j];
        }
    }

    printf("\nThe given matrix 1 is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe given matrix 2 is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat2[i][j]);
        }
    }

    printf("\nThe sum matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
    }
    return 0;
}
