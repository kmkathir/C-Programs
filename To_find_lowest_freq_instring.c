#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    int count[256] = {0};

    // Step 1: Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i]]++;
    }

    // Step 2: Find the first character with frequency 1
    int result = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (count[s[i]] == 1)
        {
            result = i;
            break;
        }
    }

    printf("First non-repeating character index: %d\n", result);

    return 0;
}



// Another method 

#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    // Check each character
    for (int i = 0; s[i] != '\0'; i++)
    {
        int count = 0;

        // Count how many times s[i] appears
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }

        // If character occurs only once
        if (count == 1)
        {
            printf("First non-repeating character: %c\n", s[i]);
            printf("Index: %d\n", i);
            return 0;
        }
    }

    // If no unique character is found
    printf("No non-repeating character found\n");
    printf("Index: -1\n");

    return 0;
}
