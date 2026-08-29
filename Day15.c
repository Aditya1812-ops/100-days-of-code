//Q29 Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial = %lld\n", factorial);

    getchar();
    getchar();
    return 0;
}
//Q30 Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reverse);

    getchar();
    getchar();
    return 0;
}