#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[3] = {
        {1, "Aman", 85.5},
        {2, "Rahul", 92.0},
        {3, "Priya", 88.5}
    };

    struct Student topper = findTopper(s, 3);

    printf("Top Student Details:\n");
    printf("Roll No: %d\n", topper.roll);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}