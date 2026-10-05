//To find the first and last occurrence of a target in a sorted array, including repeated elements.

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);
        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    }

    return 0;
}
