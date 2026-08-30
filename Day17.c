//Q33 Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, digits = 0;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        n = n / 10;
        digits++;
    }

    n = original;

    while (n != 0) {
        digit = n % 10;
        sum = sum + pow(digit, digits);
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    getchar();
    getchar();
    return 0;
}
//Q34 #include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    getchar();
    getchar();
    return 0;
}