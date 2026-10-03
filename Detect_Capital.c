#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int uppercase = 0;
    int length = strlen(word);

    // Count uppercase letters
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uppercase++;
        }
    }

    // Check the three valid cases
    if (uppercase == 0)
    {
        printf("true\n");
    }
    else if (uppercase == length)
    {
        printf("true\n");
    }
    else if (uppercase == 1 &&
             word[0] >= 'A' && word[0] <= 'Z')
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
