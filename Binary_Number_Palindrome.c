#include<stdio.h>
#include<string.h>
int main()
{
  char num[100];
  int i,len;
  scanf("%s",num);
  len=strlen(num);
  for(i=0;i<len-1;i++)
    {
    if(num[i] != num[len - i -1])
    {
      printf("Not A Palindrome");
      break;
    }
  }
  printf("Palindrome");

  retrun 0;
}
