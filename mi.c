#include <stdio.h>

int main(void){

  int a;
  int b;

  a = 5;
  b = 5;

  if(a>10){
    printf("aは10より大きい");
  }else{
    printf("aは10以下");
  }

  if(a == b)
    printf("aとbは等しい");

    if(b>=10){
      printf("bは10以上");
    }else{
      printf("bは10より小さい");
      a = a+1;
      b = b+1;
    }

  printf("a = %d\n",a);
  printf("b = %d",b);

  return 0;
}
