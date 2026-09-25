//Q85 Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, start, end;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string = %s\n", str);

    getchar();
    getchar();
    return 0;
}


//Q86 Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, start, end, isPalindrome = 1;

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
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }

    getchar();
    getchar();
    return 0;
}