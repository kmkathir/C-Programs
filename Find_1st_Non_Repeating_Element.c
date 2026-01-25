#include<stdio.h>
int main()
{
 int a[10],size,count,i,j,found;

  printf("Enter Array Size: ");
  scanf("%d",&size);

  printf("Enter Array Elements : ");
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);

 for(i=0;i<size;i++)
    {
      count=0;
      
      for(j=0;j<size;j++)
        {
          if(a[i] == a[j])
            count++;
        }
      if(count==1){
        printf("1st Non Repeating Element is : %d",a[i]);
        found =1;
      break;
    }
    }
if(!found)
  printf("1st Non Repeating Element not found");
  

  return 0; 
}
