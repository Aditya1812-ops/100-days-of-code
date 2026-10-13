// Find the first negative integer in each subarray of size k; print 0 if none exists.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int first = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first = arr[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}