/* Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int mat[100][100];
    const int rows;
    printf("Enter rows for the matrix: ");
    scanf("%d", &rows);
    const int cols = rows;

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element %d of row %d!", j + 1, i + 1);
            scanf("%d", &mat[i][j]);
            sum += mat[i][i];
        }
    }

    printf("Sum of elements of main diagonal is: %d", sum);

    return 0;
}
