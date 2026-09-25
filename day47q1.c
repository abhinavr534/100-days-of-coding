#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        freq[str1[i]]++;
    }

    // Remove characters of second string
    for (i = 0; str2[i] != '\0'; i++) {
        freq[str2[i]]--;
    }

    // Check frequency array
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}