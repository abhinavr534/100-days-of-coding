
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Rahul", 20, MALE};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    if (p1.gender == MALE)
        printf("Gender: Male\n");
    else if (p1.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}
