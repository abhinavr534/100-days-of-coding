#include <stdio.h>

int main() {
    int n, i, sum = 0, expectedSum;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Numbers should be from 0 to n
    expectedSum = n * (n + 1) / 2;

    printf("Missing number = %d\n", expectedSum - sum);

    return 0;
}