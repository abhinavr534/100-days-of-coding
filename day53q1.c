#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0;

    // Input array and calculate total sum
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++)
    {
        // Sum of elements strictly to the right
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");

    return 0;
}