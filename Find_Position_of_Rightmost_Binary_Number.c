#include<stdio.h>
#include<string.h>

int main()
{
  char num[100];
  int i,found=0,pos=1;

 printf("Enter a binary number :");
 scanf("%s",num);

  for(i= strlen(num) -1;i>=0;i--){
  if(num[i] == '1'){
    printf("%d",pos);
    found=1;
    break;
  }
  pos++;
  }
  if(!found)
    printf("-1");

  return 0;
    

}
