#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0)
    {
        printf("Quadrant 1");
    }
    else if ( a<0 && a>0 )
    {
        printf("Quadrant 2");
    }
    else if (a<0 && a<0)
    {
        printf("Quadrant 3");
    }
    else if (a>0 && a<0)
    {
        printf("Quadrant 4");
    }
    else
    {
        printf("Origin");
    }

    return 0;
}