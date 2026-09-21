#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length, excluding '\n'
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}