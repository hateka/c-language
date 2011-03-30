#include <stdio.h>
#include <stdlib.h>

int main(void){

  long i;
  double j;
  char str[128]; 
  printf("整数値を入力しなさい");
  scanf("%s",str);
  
  i = atol(str);
  j = atof(str);

  if(i){
    printf("整数値入力 = %ld\n",i);
  }else if(j){
    printf("整数値入力 = %f\n",j);
  }else{
    printf("入力エラー\n");
  }
  

  return 0;
}
