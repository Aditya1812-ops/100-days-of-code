//Q67 Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, arr[100], value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert at (0-indexed): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}
//Q68 Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, arr[100], pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0-indexed): ");
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}