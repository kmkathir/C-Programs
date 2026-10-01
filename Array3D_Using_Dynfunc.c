//Allocate Mmemory for 3D array dynamically using calloc/malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int layers, rows, cols;

    printf("Enter number of layers: ");
    scanf("%d", &layers);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Pointer to pointer to pointer
   int ***a;

a = calloc(layers, sizeof(int **));

for(int i = 0; i < layers; i++)
{
    a[i] = calloc(rows, sizeof(int *));

    for(int j = 0; j < rows; j++)
    {
        a[i][j] = calloc(cols, sizeof(int));
    }
}

    // Input elements
    printf("Enter elements:\n");

    for(int i = 0; i < layers; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            for(int k = 0; k < cols; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    // Display elements
    printf("\n3D Array:\n");

    for(int i = 0; i < layers; i++)
    {
        printf("Layer %d:\n", i);

        for(int j = 0; j < rows; j++)
        {
            for(int k = 0; k < cols; k++)
            {
                printf("%d ", a[i][j][k]);
            }

            printf("\n");
        }

        printf("\n");
    }

    // Free memory
    for(int i = 0; i < layers; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            free(a[i][j]);
        }

        free(a[i]);
    }

    free(a);

    return 0;
}
