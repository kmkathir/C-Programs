//Allocate Memory for 2D array dynamically using calloc/malloc 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &cols);

    int **a;

    // Allocate row pointers
    a = calloc(rows, sizeof(int *));

    // Allocate columns for each row
    for(int i = 0; i < rows; i++)
    {
        a[i] = calloc(cols, sizeof(int));
    }

    // Input
    printf("Enter elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Output
    printf("2D Array:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    // Free memory
    for(int i = 0; i < rows; i++)
    {
        free(a[i]);
    }

    free(a);

    return 0;
}
