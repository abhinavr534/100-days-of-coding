#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Reversed string: ");

    // Print from last character to first
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}