#include <stdio.h>

int main(void) {
    FILE *fp;
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n') {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}