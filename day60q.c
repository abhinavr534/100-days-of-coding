#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {

        // Remove elements smaller than or equal to arr[i]
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        // Top is now the nearest greater element on left
        if (top == -1) {
            printf("-1 ");
        } else {
            printf("%d ", stack[top]);
        }

        // Push current element
        stack[++top] = arr[i];
    }

    return 0;
}