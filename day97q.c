#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {
        101,
        "Rahul",
        45000.0,
        {15, 8, 2024}
    };

    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    printf("Joining Date: %02d/%02d/%d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}