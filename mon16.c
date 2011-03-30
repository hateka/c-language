#include <stdio.h>
#include <string.h>

int main(void){

  char a[21];
  char b[11];
  int i;

  do{
     printf("aの文字いれて");
     scanf("%s",a);
     printf("bの文字いれて");
     scanf("%s",b);
     strcat(a,b);
     j = strlen(a);
  }while(i<=22);
  
  printf("aの値は%sです\n",a);
  printf("bの値は%s",b);
  printf("合計は%dです",j);


return 0;
}
