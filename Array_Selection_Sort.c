#include <stdio.h>

int main()
{
    int a[] = {5, 3, 8, 4, 2};
    int n = 5;

    int i, j;
    int min;
    int temp;

    // Outer loop
    for (i = 0; i < n - 1; i++)
    {
        // Assume current element is the smallest
        min = i;

        // Find the smallest element
        // in the remaining unsorted array
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        // Swap smallest element with current element
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    // Print sorted array
    printf("Sorted array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
