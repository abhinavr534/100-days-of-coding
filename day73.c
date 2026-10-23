#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;

    // Open file in write mode
    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to the file using fprintf()
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}