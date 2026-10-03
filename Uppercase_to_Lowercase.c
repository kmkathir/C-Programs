//To covert uppercase letters to lowercase 
#include <stdio.h>

int main()
{
    char s[100];

    // Read the string
    printf("Enter a string: ");
    scanf("%s", s);

    // Check each character
    for (int i = 0; s[i] != '\0'; i++)
    {
        // If the character is uppercase
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;
        }
    }

    // Print the converted string
    printf("Lowercase string: %s\n", s);

    return 0;
}
