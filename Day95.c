//Return a structure containing top student's details from a function
#include <stdio.h>
struct Student {
    char name[50];
    int roll, marks;
};
struct Student topper(struct Student s[]) {
    int i, max = 0;

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}
int main() {
    struct Student s[3], top;
    int i;
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    top = topper(s);
    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);
    return 0;
}