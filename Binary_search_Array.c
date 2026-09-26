#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70};

    int n = 7;
    int key = 60;

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        // Find the middle position
        mid = (low + high) / 2;

        // If middle element is the element we want
        if (a[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }

        // If key is greater, search right half
        else if (key > a[mid])
        {
            low = mid + 1;
        }

        // If key is smaller, search left half
        else
        {
            high = mid - 1;
        }
    }

    // If loop finishes, element was not found
    printf("Element not found");

    return 0;
}
