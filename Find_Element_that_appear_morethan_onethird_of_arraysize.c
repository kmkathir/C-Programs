#include<stdio.h>
int main()
{
 int a[10],i,j,count,found=0,size;

  printf("Enter Array size : ");
  scanf("%d",&size);

  printf("Enter array elements : ");
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);

  printf("Elements that are more than n/3 times are :\n");

 for(i=0;i<size;i++)
    {
      for(j=0;j<i;j++)
        {
        if(a[i] == a[j] )
          break;
        }
      if(j != i)
        continue;

      count = 0;

      for(j=0;j<size;j++)
        {
          if( a[i] == a[j] )
            count++;
        }
      if(count > size / 3 )
      {
        printf("%d\n",a[i]);
      found=1;
      }
      
    }

  if(!found)
    printf("No such element");
  

  return 0;
}
