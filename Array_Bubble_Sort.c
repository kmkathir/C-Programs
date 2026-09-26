#include <stdio.h>

int main()
{
    int a[] = {5, 3, 8, 4, 2};
    int n = 5;

    int i, j, temp;

    // Outer loop = number of passes
    for (i = 0; i < n - 1; i++)
    {
        // Compare adjacent elements
        for (j = 0; j < n - 1 - i; j++)
        {
            // If left element is greater than right element
            if (a[j] > a[j + 1])
            {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
