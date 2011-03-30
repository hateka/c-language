#include <stdio.h>

int main(void){

  char ch;

  printf("文字いれて");
  scanf("%c",&ch);

  if(ch>='A' && ch<='Z'){
    ch = ch + 32;
  }
  printf("%c\n",ch);

  return 0;
}
