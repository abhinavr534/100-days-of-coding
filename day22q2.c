#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}