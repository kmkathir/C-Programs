// To print 1,2,3,4 for n input numbers 
// logic ---- (Comma should not come for first and last number)

#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      
      if(i<n)
      {
          printf("%d,",i);
        
    }
    else
    {
        printf("%d",i);
    }
    }
    return 0;
}
