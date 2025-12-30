#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    e=a+b+c+d;
    printf("total =",e);
    if(e> 90 && e < 100)
    {
        printf("grade a");
    }
    else if (e > 80 && e < 90 )
    {
        printf("grade b");
    }
    else if (e> 70 && e < 60)
    {
        printf("grade c");
    }
    else if (e < 60 )
    {
        printf("grade d");
    }
    return 0;
}