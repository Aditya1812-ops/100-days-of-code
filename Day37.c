//Q73 Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j, mat[10][10], rowSum[10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + mat[i][j];
        }
    }

    printf("Row sums: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}
//Q74 Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, mat[10][10], trans[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}