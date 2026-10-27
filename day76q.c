#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter file name: ");
    scanf("%99s", filename);
    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}