#include <stdio.h>

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month month;

    int days[] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    for (month = JANUARY; month <= DECEMBER; month++) {
        printf("Month %d = %d days\n", month + 1, days[month]);
    }

    return 0;
}