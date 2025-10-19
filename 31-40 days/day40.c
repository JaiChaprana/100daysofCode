/* Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int mat[100][100];
    const int rows;
    printf("Enter rows for the matrix: ");
    scanf("%d", &rows);
    const int cols = rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element %d of row %d!", j + 1, i + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int sum = 0; sum <= rows + cols - 2; sum++) {
        if (sum % 2 == 0) {
            for (int i = 0; i <= sum; i++) {
                int j = sum - i;
                if (i < rows && j < cols)
                    printf("%d ", mat[i][j]);
            }
        }
    }
}
