#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Select your role:\n");
    printf("0 - ADMIN\n");
    printf("1 - USER\n");
    printf("2 - GUEST\n");
    printf("Enter choice: ");
    scanf("%d", (int *)&role);

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}