//Create Employee structure with nested Date structure for joining date and print details
#include <stdio.h>

struct Date {
    int day, month, year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joining;
};
int main() {
    struct Employee e;
    scanf("%s %d %d %d %d", e.name, &e.id,
          &e.joining.day, &e.joining.month, &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d",
           e.name, e.id, e.joining.day,
           e.joining.month, e.joining.year);
    return 0;
}