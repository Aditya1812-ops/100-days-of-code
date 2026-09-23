//Q81 Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Length = %d\n", count);

    getchar();
    getchar();
    return 0;
}


//Q82 Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    getchar();
    getchar();
    return 0;
}