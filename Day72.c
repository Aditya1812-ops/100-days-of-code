// Read and display file contents using fgets().
#include <stdio.h>

int main() {
    char str[100];
    FILE *fp = fopen("info.txt", "r");

    while (fgets(str, 100, fp) != NULL)
        printf("%s", str);

    fclose(fp);
    return 0;
}