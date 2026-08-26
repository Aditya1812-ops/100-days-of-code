//Q21 Write a program to display the month name and number of days using switch-case for a given month number
#include <stdio.h>

int main() {
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28/29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 30 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q22 Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", percentage);
    } else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", percentage);
    } else {
        printf("No profit no loss\n");
    }

    getchar();
    getchar();
    return 0;
}