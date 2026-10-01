//Q97 Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i = 0, newWord = 1;

    printf("Enter a name: ");
    scanf("%[^\n]s", name);

    printf("Initials: ");
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            newWord = 1;
        } else if (newWord == 1) {
            char ch = name[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 'a' + 'A';
            }
            printf("%c.", ch);
            newWord = 0;
        }
        i++;
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}


//Q98 Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int len = 0, i, end, lastStart, newWord = 1;

    printf("Enter a name: ");
    scanf("%[^\n]s", name);

    while (name[len] != '\0') {
        len++;
    }

    end = len - 1;
    while (end >= 0 && name[end] == ' ') {
        end--;
    }

    lastStart = end;
    while (lastStart >= 0 && name[lastStart] != ' ') {
        lastStart--;
    }
    lastStart++;

    for (i = 0; i < lastStart; i++) {
        if (name[i] == ' ') {
            newWord = 1;
        } else if (newWord == 1) {
            char ch = name[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 'a' + 'A';
            }
            printf("%c. ", ch);
            newWord = 0;
        }
    }

    for (i = lastStart; i <= end; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    getchar();
    getchar();
    return 0;
}