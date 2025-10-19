/* Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/

#include <stdio.h>

int main() {
    int row1, col1;
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &col1);

    int mat1[row1][col1];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Enter element %d for row %d of matrix 1!!", j + 1, i + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    int row2 = col1, col2;
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &col2);

    int mat2[row2][col2];

    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Enter element %d for row %d of matrix 2!!", j + 1, i + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    int mat3[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
