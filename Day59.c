// Find the maximum sum among all subarrays of size k.
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

    int maxSum = 0;

    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int sum = maxSum;

    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}