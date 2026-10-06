#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], answer[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Store product of all elements to the left
    answer[0] = 1;

    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Multiply by product of all elements to the right
    int right = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    // Print answer array
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}