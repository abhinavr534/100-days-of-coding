#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length must be same
    if (strlen(str1) != strlen(str2))
    {
        printf("Not a rotation");
        return 0;
    }

    // Make str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check whether str2 occurs in temp
    if (strstr(temp, str2) != NULL)
        printf("It is a rotation");
    else
        printf("Not a rotation");

    return 0;
}