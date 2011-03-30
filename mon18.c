#include <stdio.h>
#include <ctype.h>

int main(void){

  char str[21] = "AbcDefGHijk1234lmNOP";
  int i;
  i = 0;
  
  while(str[i] !='\0'){
     str[i] = toupper(str[i]);
     i++;
  }
  printf("str = %s\n",str);
  return 0;

}
