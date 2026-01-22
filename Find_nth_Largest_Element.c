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
int count=1;
int found=0;
    
    for(i=1;i<size;i++)
    {
        if(a[i] != a[i-1])
        count++;
        
    if(count==n)
    {
    printf("The largest element is : %d",a[i]);
    found =1;
    break;
    }
}
if(!found)
{
    printf("No element found !");
}

return 0;

}
