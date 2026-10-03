#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter Roman numeral: ");
    scanf("%s", s);

    int result = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int current;
        int next;

        // Find value of current character
        if (s[i] == 'I')
            current = 1;
        else if (s[i] == 'V')
            current = 5;
        else if (s[i] == 'X')
            current = 10;
        else if (s[i] == 'L')
            current = 50;
        else if (s[i] == 'C')
            current = 100;
        else if (s[i] == 'D')
            current = 500;
        else
            current = 1000;   // M

        // Find value of next character
        if (s[i + 1] == 'I')
            next = 1;
        else if (s[i + 1] == 'V')
            next = 5;
        else if (s[i + 1] == 'X')
            next = 10;
        else if (s[i + 1] == 'L')
            next = 50;
        else if (s[i + 1] == 'C')
            next = 100;
        else if (s[i + 1] == 'D')
            next = 500;
        else if (s[i + 1] == 'M')
            next = 1000;
        else
            next = 0;

        // Compare current with next
        if (current < next)
        {
            result = result - current;
        }
        else
        {
            result = result + current;
        }
    }

    printf("Integer value = %d\n", result);

    return 0;
}
