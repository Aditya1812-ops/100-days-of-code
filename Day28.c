//Q55 Write a program to print all the prime numbers from 1 to n. 
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}


//Q56 Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int n, i, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}