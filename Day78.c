//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *f;
    char ch;
    int v = 0, c = 0;

    f = fopen("text.txt", "r");

    if (f == NULL)
    {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }

    fclose(f);

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    return 0;
}
