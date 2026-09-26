#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int len, i;
    
    scanf("%s", a);
    len = strlen(a);
    
    for(i = 0; i < len / 2; i++)
    {
        if(a[i] != a[len - i - 1])
        {
            printf("Not a Palindrome");
            return 0;
        }
    }
    
    printf("Palindrome");
    
    return 0;
}
