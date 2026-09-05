//Q45 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;
        sum = sum + (float)numerator / denominator;
    }

    printf("Sum = %.4f\n", sum);

    getchar();
    getchar();
    return 0;
}
/*Q46 Write a program to print the following pattern:
*****
*****
*****
*****
*****  */


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}