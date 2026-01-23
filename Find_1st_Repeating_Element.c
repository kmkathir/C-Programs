#include<stdio.h>
int main()
{
 int a[10],i,j,size,found;

  printf("Enter array size: ");
  scanf("%d",&size);

  printf("Enter array elements : ");
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);

 for (i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
        {
          if( a[i] ==a[j] )
          {
          printf("First Repeating element is : %d",a[i]);
          found =1;
          break;
        }
        }
    if(found)
      break;
    }
  if(!found)
    printf("No repeating elemnt found :");
  

  return 0;

}
