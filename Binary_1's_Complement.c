
#include<stdio.h>
#include<string.h>
int main()
{
  char num[100];
  int i,len;

  scanf("%s",num);
  len=strlen(num);
  for(i=0;i<len;i++)
    {
      if(num[i] == '0'){
        num[i] = '1';
      }
      else
        num[i] = '0';
    }
printf("%s",num);

  return 0;
  
}
