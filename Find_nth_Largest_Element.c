#include<stdio.h>
int main()
{
	int a[100],size,i,n,j,temp;

	printf("Enter size of array :\n");
	scanf("%d",&size);

	printf("Enter array elements :\n");
	for(i=0; i<size; i++)
		scanf("%d",&a[i]);

	printf("Enter n :");
	scanf("%d",&n);

	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) {
			if(a[i] < a[j] ) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	if(n>size)
		printf("no nth largest number");
	else
		printf("%dth largest element is : %d",n,a[n-1]);
	return 0;
}
