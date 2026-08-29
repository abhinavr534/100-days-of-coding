#include <stdio.h>

int main() {
    int a, b, x, y, remainder, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;

    if (a == 0 || b == 0)
        lcm = 0;
    else
        lcm = (a / gcd) * b;

    printf("LCM = %d\n", lcm);

    return 0;
}