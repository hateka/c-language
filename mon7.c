#include <stdio.h>

int main(void){

  char str1[80];
  char str2[80];
  printf("文字列入力");
  scanf("%s",str1);
  int i = 0;
  do{
    str2[i] = str1[i];

  }while(str1[i++]!='\0');
  printf("str2 = %s\n",str2);

  return 0;

}
