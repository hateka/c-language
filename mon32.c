#include <stdio.h>
#include <string.h>

int main(void){

  char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char str2[30];
  char *p,*p2;

  p = str1;
  p2 = str2;

  while(*p!='\0'){

    ++p;

  }

  while(p > str1){
    --p;
    *p2=*p;
    ++p2;

  }
  *p2 = '\0';


    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
  

  return 0;

}
