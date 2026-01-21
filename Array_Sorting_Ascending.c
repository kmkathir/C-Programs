#include<stdio.h>
int main()
{
  int arr[10],n,i,j,temp;
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter array elements : ");
  for(i=0;i<n;i++){
    scanf("%d/n",&arr[i]);
  }
 //sorting_logic
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(arr[i] > arr[j]){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    }
  }
      printf("Sorted Array :\n ");
      for(i=0;i<n;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}
