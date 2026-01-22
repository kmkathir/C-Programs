#include<stdio.h>
int main()
{
    int a[100],size,n,i,j,count;
    int majority = -1;
    printf("Enter array size : ");
    scanf("%d",&size);
    
    printf("Enter array elements : ");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    for(i=0;i<size;i++)
    {
        count =0;
        
        for(j=i+1;j<size;j++)
        {
            if(a[i] == a[j])
            count++;
            
        }
        
        if(count > size / 2 )
        {
            majority = a[i];
            break;
        }
    }
    if( majority == -1 )
    printf("No Majority element found");
    else
    printf("Majority element is %d ",majority);
    
  return 0;   
}
