
#include<stdio.h>
int main()
{
  int a[100],p[100],n[100],i,j,size;
  int r=0,q=0,k=0;

  printf("Enter array size :");
  scanf("%d",&size);

  printf("Enter array elements :");
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);

  //seperate pos and neg elements
  
for(i=0;i<size;i++)
  {
    if(a[i] >= 0)
      p[r++] = a[i];
    else
      n[q++] = a[i];
  }

  i=0;
  j=0;

  while(i < r && j < q)
    {
    a[k++] = p[i++];
    a[k++] = n[j++];
    }

  while( i < r )
    a[k++] = p[i++];

  while( j < q )
    a[k++] = n[j++];

  printf("Rearranged array are :");
  for(i=0;i<size;i++)
    printf("%d ",a[i]);
  
  return 0;
}
