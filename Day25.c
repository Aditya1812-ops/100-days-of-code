//Q49 Write a program to print the following pattern:
//5
//45
//345
//2345
//12345


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q50 Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}