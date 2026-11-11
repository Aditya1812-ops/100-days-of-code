//Define a struct with enum Gender and print person's gender
#include <stdio.h>
enum Gender { MALE, FEMALE };
struct Person {
    enum Gender gender;
};
int main() {
    struct Person p = {MALE};
    printf("%s", p.gender == MALE ? "Male" : "Female");
    return 0;
}