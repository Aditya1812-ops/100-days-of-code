//Q63 Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], merged[200], i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}
//Q64 Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, digit, i, maxCount, maxDigit;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        count[0] = 1;
    }

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    maxCount = count[0];
    maxDigit = 0;

    for (i = 1; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d (appears %d times)\n", maxDigit, maxCount);

    getchar();
    getchar();
    return 0;
}