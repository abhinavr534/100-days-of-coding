#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n], merged[m + n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays
    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements of first array
    while (i < m)
        merged[k++] = a[i++];

    // Copy remaining elements of second array
    while (j < n)
        merged[k++] = b[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    return 0;
}