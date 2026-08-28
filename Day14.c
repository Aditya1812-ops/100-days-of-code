//Q27 Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Sum = %d\n", sum);

    getchar();
    getchar();
    return 0;
}
//Q28 Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product = %lld\n", product);

    getchar();
    getchar();
    return 0;
}