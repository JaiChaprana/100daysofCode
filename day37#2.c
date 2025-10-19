/* Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    int rows, cols;
    printf("Enter the number of rows: \t");
    scanf("%d", &rows);
    printf("Enter the number of columns: \t");
    scanf("%d", &cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element of row %d and column %d: \t", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe given matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }


    int transpose[100][100];

    printf("\nTranspose of the given matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
            printf("%d\t", transpose[j][i]);
        }
        printf("\n");
    }

    printf("\nTranspose of the given matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
