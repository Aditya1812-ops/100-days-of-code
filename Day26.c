//Q51 Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345



#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q52 Write a program to print the following pattern:
/*

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main() {
    int n, i, j, stars, totalRows;

    printf("Enter n: ");
    scanf("%d", &n);

    totalRows = 2 * n - 1;

    for (i = 1; i <= totalRows; i++) {
        if (i <= n) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (totalRows - i + 1) - 1;
        }

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        if (i != totalRows) {
            printf("\n");
        }
    }

    getchar();
    getchar();
    return 0;
}