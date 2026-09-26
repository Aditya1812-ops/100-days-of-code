//Q87 Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0, start, end, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == 1) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    getchar();
    getchar();
    return 0;
}


//Q88 Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("Result = %s\n", str);

    getchar();
    getchar();
    return 0;
}