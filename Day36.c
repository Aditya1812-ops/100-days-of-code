//Q71 Read and print a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, mat[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q72 Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, mat[10][10], sum = 0;

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
            sum = sum + mat[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    getchar();
    getchar();
    return 0;
}