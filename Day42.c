//Q83 Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    getchar();
    getchar();
    return 0;
}


//Q84 Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    printf("Uppercase string = %s\n", str);

    getchar();
    getchar();
    return 0;
}