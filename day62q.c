#include <stdio.h>

int main()
{
    int n, k, i, j, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}