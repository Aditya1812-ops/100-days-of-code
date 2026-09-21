//Q77 Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, mat[10][10], distinct = 1;

    printf("Enter size of matrix (n for n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1) {
        printf("Diagonal elements are distinct\n");
    } else {
        printf("Diagonal elements are not distinct\n");
    }

    getchar();
    getchar();
    return 0;
}

//Q78 Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, mat[10][10], sum = 0;

    printf("Enter size of matrix (n for n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements: ");
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + mat[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    getchar();
    getchar();
    return 0;
}