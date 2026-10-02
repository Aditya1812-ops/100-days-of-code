//Q99 #include <stdio.h>

int main() {
    int day, month, year;
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month\n");
    }

    getchar();
    getchar();
    return 0;
}


//Q100 Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, j, k;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("Substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    getchar();
    getchar();
    return 0;
}