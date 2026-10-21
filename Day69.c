// Find the repeated element in a single traversal.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int index = arr[i];

        if (arr[index] < 0) {
            printf("%d\n", index);
            return 0;
        }

        arr[index] = -arr[index];
    }

    return 0;
}