//Q43 Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is a strong number\n", original);
    } else {
        printf("%d is not a strong number\n", original);
    }

    getchar();
    getchar();
    return 0;
}

//Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = (i == 1) ? 1 : 2 * i;
        sum = sum + (float)numerator / denominator;
    }

    printf("Sum = %.4f\n", sum);

    getchar();
    getchar();
    return 0;
}