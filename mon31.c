#include <stdio.h>
#include <ctype.h>

int main(void){

  char str[]="AbcDefGHijk1234lmNOP";
  char *p;

  p = str;

  while(*p!='\0'){
    if(*p>= 97 || *p<=122){
      *p = toupper(*p);
      ++p;

    }
  }
  printf("str = %s",str);
  putchar('\n');
  

  return 0;

}
