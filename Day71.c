// Save name and age in a file using fprintf().
#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("Enter name and age: ");
    scanf("%s %d", name, &age);

    FILE *fp = fopen("info.txt", "w");
    fprintf(fp, "%s %d", name, age);
    fclose(fp);

    printf("Data saved successfully!");
    return 0;
}

