/* Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (transpose[i][j] != mat[i][j]) {
                count = 0;
                break;
            } else {
                count = 1;
            }
        }
    }

    if (count) {
        printf("Symmetric matrix!!");
    } else {
        printf("Non-symmetric matrix!!");
    }
    return count;
}

