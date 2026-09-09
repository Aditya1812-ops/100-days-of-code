//Q53 Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
// *


#include <stdio.h>

int main() {
    int n, i, j, stars, totalRows;

    printf("Enter n: ");
    scanf("%d", &n);

    totalRows = 2 * n - 1;

    for (i = 1; i <= totalRows; i++) {
        if (i <= n) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (totalRows - i + 1) - 1;
        }

        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q54 Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int n, i, j, stars, spaces, totalRows;

    printf("Enter n: ");
    scanf("%d", &n);

    totalRows = 2 * n - 1;

    for (i = 1; i <= totalRows; i++) {
        if (i <= n) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (totalRows - i + 1) - 1;
        }
        spaces = (2 * n - 1 - stars) / 2;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}