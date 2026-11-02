#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day day;

    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d\n", day);
    }

    return 0;
}