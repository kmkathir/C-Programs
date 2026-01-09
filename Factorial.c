//need to be coded

#include <stdio.h>

int main()
{
    int n,i;
    int fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i ;
         
    }
    printf("%d",fact);

    return 0;
}
