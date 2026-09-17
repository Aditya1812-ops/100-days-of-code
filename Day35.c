//Q69 Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i, arr[100], largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest = %d\n", secondLargest);

    getchar();
    getchar();
    return 0;
}
//Q70 Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, i, arr[100], temp[100], k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}