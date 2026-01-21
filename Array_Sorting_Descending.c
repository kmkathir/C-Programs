#include<stdio.h>
int main()
{
  int a[10],i,n,j,temp;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  printf("Enter Array elements : ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
for(i=0;i<n-1;i++){
  for(j=n+1;j<n;j++){
    if(a[i]<a[j]){
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
}
  printf("Sorted array :\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
return 0;
}
    







  

}
