//Q13 Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is not a leap year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is not a leap year\n", year);
    }

    getchar();
    getchar();
    return 0;
}
//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is a consonant\n", ch);
    }

    getchar();
    getchar();
    return 0;
}