//Q41 Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, digits = 0, firstDigit, lastDigit, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
    }
    firstDigit = temp;

    lastDigit = n % 10;

    result = n - firstDigit * (int)pow(10, digits - 1) - lastDigit;
    result = result + lastDigit * (int)pow(10, digits - 1) + firstDigit;

    printf("After swapping first and last digit = %d\n", result);

    getchar();
    getchar();
    return 0;
}

//Q42 Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n && n != 0) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }

    getchar();
    getchar();
    return 0;
}