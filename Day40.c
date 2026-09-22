//Q79 Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j, mat[10][10], d, row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal: ");
    for (d = 0; d <= rows + cols - 2; d++) {
        if (d % 2 == 0) {
            row = d < rows ? d : rows - 1;
            col = d - row;
            while (row >= 0 && col < cols) {
                printf("%d ", mat[row][col]);
                row--;
                col++;
            }
        } else {
            col = d < cols ? d : cols - 1;
            row = d - col;
            while (col >= 0 && row < rows) {
                printf("%d ", mat[row][col]);
                row++;
                col--;
            }
        }
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}

//Q80 Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int mat1[10][10], mat2[10][10], result[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter first matrix elements: ");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        getchar();
        getchar();
        return 0;
    }

    printf("Enter second matrix elements: ");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}