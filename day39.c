/* Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    if (rows != cols) {
        printf("Not a square matrix\n");
        return 0;
    }

    int diag[100], k = 0;
    for (int i = 0; i < rows; i++) {
        diag[k++] = mat[i][i];
    }

    int distinct = 1;
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
