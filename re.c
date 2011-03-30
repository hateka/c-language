#include <stdio.h>

int main(void){

  char a[] = "a[]=";
  printf("%s",a);

  int i = 0;
  for(i;i<5;){
    a[i]= i*2;
    printf("%d",a[i]);
    i++;
  }

  return 0;
}
