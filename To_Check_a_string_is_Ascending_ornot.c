#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,len,found=0;
    
    scanf("%s",a);
    len = strlen(a);
    
    for(i=0;i<len-1;i++)
    {
        if(a[i] > a[i+1]){
            printf("No");
            return 0;
        }
    }
    
    printf("Yes");

    return 0;
}

