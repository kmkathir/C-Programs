#include<stdio.h>
int main()
{
  int a[100],i,j,temp,size;

  printf("Enter array size : ");
  scanf("%d",&size);

  printf("Enter array elements : ");
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);

  //1st half of array
  
  for(i=0;i<size/2;i++){
    for(j=i+1;j<size/2;j++){
      if(a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  

  
return 0;
}
