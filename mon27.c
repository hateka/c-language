#include <stdio.h>


int main(void){

  char c;
  char *p;

  c = 'A';
  p = &c;
  printf("%c\n",*p);
  return 0;
}
