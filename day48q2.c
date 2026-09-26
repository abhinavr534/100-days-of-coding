#include <stdio.h>

int main()
{
    char str[200];
    int i, start = 0, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        // Word ends when space, newline or '\0' is found
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            // Reverse current word
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            // Next word starts after the space
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Result: %s", str);

    return 0;
}