#include <stdio.h>

int main()
{
	char a[100],b[100];
	int i=0,j=0;

	scanf("%s %s", a, b);

	while(a[i] == '0' && a[i] != '\0')
		i++;
	while(b[j] == '0' && b[j] != '\0')
		j++;

	if( a[i] == '\0' )
		i--;
	if(b[j] == '\0' )
		j--;

	while ( a[i] != '\0' && b[j] != '\0') {
		if(a[i] != b[j]) {
			printf("Not Equal");
			return 0;
		}
		i++;
		j++;
	}

	if(a[i] == '\0' && b[j] == '\0')
		printf("Equal");
	else
		printf("Not equal");

	return 0;
}

