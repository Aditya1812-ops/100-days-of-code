//Q91 Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("Result = %s\n", result);

    getchar();
    getchar();
    return 0;
}


//Q92 Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i = 0, found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            printf("First repeating character = %c\n", str[i]);
            found = 1;
            break;
        }
        i++;
    }

    if (found == 0) {
        printf("No repeating character found\n");
    }

    getchar();
    getchar();
    return 0;
}