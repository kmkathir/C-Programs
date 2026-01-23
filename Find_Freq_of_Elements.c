#include<stdio.h>
int main()
{
  int a[10],i,j,size,count;
    
  printf("Enter srray size :");
  scanf("%d",&size);
  
  printf("Enter array elements :");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    
    printf("\nElement Frequency\n");
  
  for(i=0;i<size;i++)
    {
      count = 1;

      for(j=0;j<i;j++)
        {
          if(a[i] == a[j])
            break;
        }
      if(j!=i)
        continue;

      for(j=i+1;j<size;j++)
        {
          if( a[i] == a[j] )
            count++;
        }

  printf("%d\t\t%d\n",a[i],count);
    }

  return 0;
}
