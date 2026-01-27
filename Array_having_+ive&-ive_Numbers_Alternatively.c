
#include<stdio.h>
int main()
{
  int a[100],p[100],n[100],i,j,size;

  printf("Enter array size :");
  scanf("%d",&size);

  printf("Enter array elements :");
  for(i=o;i<size;i++)
    scanf("%d",&a[i]);

  //seperate pos and neg elements
  
for(i=0;i<size;i++)
  {
    if(a[i] >= 0)
      p[p++] = a[i];
    else
      n[n++] = a[i];
  }
  


  return 0;
}
