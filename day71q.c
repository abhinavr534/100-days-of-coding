#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int index = arr[i] < 0 ? -arr[i] : arr[i];

        if (arr[index] < 0) {
            printf("%d\n", index);
            break;
        }

        arr[index] = -arr[index];
    }

    return 0;
}