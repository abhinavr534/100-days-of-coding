#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        count[0] = 1;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit < 0)
            digit = -digit;

        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("Number of occurrences: %d\n", maxCount);

    return 0;
}