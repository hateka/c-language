#include<stdio.h>

int main(void){

  int i,*j;

  j = &i;

  for(i=0;i<10;i++){
    printf("%d",*j);
    printf("\n");
  }

  return 0;
}
