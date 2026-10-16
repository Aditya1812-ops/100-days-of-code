// Find the length of the longest substring without repeating characters.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0};
        int len = 0;

        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]]) {
                break;
            }

            seen[(unsigned char)s[j]] = 1;
            len++;
        }

        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}