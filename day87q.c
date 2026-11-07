#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    float a, b;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}