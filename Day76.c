// Write a C program to open a file in read mode, check if it exists, and display its contents; otherwise, print an error message.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("\nFile contents:\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
