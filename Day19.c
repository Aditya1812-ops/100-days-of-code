//Q37 Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    hcf = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    lcm = (a * b) / hcf;

    printf("LCM = %d\n", lcm);

    getchar();
    getchar();
    return 0;
}
//Q38 Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    getchar();
    getchar();
    return 0;
}