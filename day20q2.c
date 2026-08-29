#include <stdio.h>

int main() {
    long long binary, temporary, divisor = 1;
    int digit, complement;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temporary = binary;

    while (temporary >= 10) {
        divisor = divisor * 10;
        temporary = temporary / 10;
    }

    printf("1's complement = ");

    while (divisor > 0) {
        digit = binary / divisor;
        binary = binary % divisor;

        if (digit == 0)
            complement = 1;
        else
            complement = 0;

        printf("%d", complement);
        divisor = divisor / 10;
    }

    printf("\n");

    return 0;
}