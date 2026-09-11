//Q57 Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    getchar();
    getchar();
    return 0;
}
//Q58 Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n, i, arr[100], max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    getchar();
    getchar();
    return 0;
}