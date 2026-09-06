/*Q47 Write a program to print the following pattern:
*
**
***
****
***** 
*/


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}
/*Q48 Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;
}