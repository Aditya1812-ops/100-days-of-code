//Q59 Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i, arr[100], evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);

    getchar();
    getchar();
    return 0;
}
//Q60 Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i, arr[100], positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive count = %d\n", positiveCount);
    printf("Negative count = %d\n", negativeCount);
    printf("Zero count = %d\n", zeroCount);

    getchar();
    getchar();
    return 0;
}