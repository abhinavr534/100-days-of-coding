
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int count[26] = {0};

    scanf("%999s", s);
    scanf("%999s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
