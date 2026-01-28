#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,len;
    
    scanf("%s",a);
    len=strlen(a);
    
    for(i=0;i<len;i++){
    printf("%c",a[i]);
    
        if((len-i-1) % 3 ==0 && i!=len-1 )
        {
            printf(",");
        }
    }

    return 0;
}
