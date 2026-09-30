//Q95 Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, shift, match, isRotation = 0;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 == len2) {
        for (shift = 0; shift < len1; shift++) {
            match = 1;
            for (i = 0; i < len1; i++) {
                if (str1[(i + shift) % len1] != str2[i]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                isRotation = 1;
                break;
            }
        }
    }

    if (isRotation == 1) {
        printf("The second string is a rotation of the first\n");
    } else {
        printf("The second string is not a rotation of the first\n");
    }

    getchar();
    getchar();
    return 0;
}


//Q96 Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end, temp;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }

    printf("Result = %s\n", str);

    getchar();
    getchar();
    return 0;
}