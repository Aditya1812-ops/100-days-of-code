//Q89 Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Enter character to count: ");
    scanf(" %c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", target, count);

    getchar();
    getchar();
    return 0;
}


//Q90 Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }

    printf("Toggled string = %s\n", str);

    getchar();
    getchar();
    return 0;
}