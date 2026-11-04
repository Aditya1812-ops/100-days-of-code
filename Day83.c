//Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Months {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month[10];

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    char *names[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    scanf("%9s", month);

    for (int i = 0; i < 12; i++) {
        if (strcmp(month, names[i]) == 0) {
            if (i == FEB - JAN)
                printf("28 or 29 days");
            else
                printf("%d days", days[i]);

            return 0;
        }
    }

    return 0;
}