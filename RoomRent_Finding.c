#include <stdio.h>

int main()
{
    int nor,month,r;
    scanf("%d %d",&nor ,&month);
    if (month == 12 || month == 11 || month == 1 || month == 4)
    {
        r=nor*1300 ;
    }
    else 
    {
        r=nor*1000 ;
    }
    printf("room rent = %d",r);
    
    return 0;
}