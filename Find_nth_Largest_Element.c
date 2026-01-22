#include<stdio.h>
int main()
{
    int a[10],size,i,j,n,temp;
    printf("Enter array size :");
    scanf("%d",&size);
    
    printf("Enter array elements :");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    
    printf("n value :");
    scanf("%d",&n);
    
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if( a[i] < a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }
        }
    }
