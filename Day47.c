//Q93 Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i = 0, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    i = 0;
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count[str1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count[str2[i] - 'a']--;
        }
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }

    getchar();
    getchar();
    return 0;
}


//Q94 Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200], longest[200], word[200];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    longest[0] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (j > k) {
                k = j;
                int m;
                for (m = 0; m <= j; m++) {
                    longest[m] = word[m];
                }
            }
            j = 0;
            if (str[i] == '\0') {
                break;
            }
        } else {
            word[j] = str[i];
            j++;
        }
        i++;
    }

    printf("Longest word = %s\n", longest);

    getchar();
    getchar();
    return 0;
}