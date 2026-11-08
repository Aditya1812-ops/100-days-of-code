//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main()
{
    char r[20];
    scanf("%s", r);
    if(strcmp(r, "ADMIN") == 0)
        printf("Welcome Admin!");
    else if(strcmp(r, "USER") == 0)
        printf("Welcome User!");
    else if(strcmp(r, "GUEST") == 0)
        printf("Welcome Guest!");

    return 0;
}