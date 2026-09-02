//Q39 Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product = product * digit;
        }
        n = n / 10;
    }

    printf("Product of odd digits = %d\n", product);

    getchar();
    getchar();
    return 0;
}
//Q40 Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long n, binary, complement = 0, place = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    binary = n;

    while (binary != 0) {
        digit = binary % 10;
        complement = complement + (1 - digit) * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement = %lld\n", complement);

    getchar();
    getchar();
    return 0;
}