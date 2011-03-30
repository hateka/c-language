#include <stdio.h>

int main(void){

  int hai[51];
  int a,b;
  int i;
  int amari;
  
  
  printf("整数値を２つ入れてください");
  scanf("%d%d",&a,&b);
  printf("%d\n",a);
  printf("%d",b);
  if(b == 0){
    printf("終了");
    return 0;
  }
  printf("%d / %d = ",a,b);

  hai[0] = a / b;
  
  for(i = 1;i<51;i++){
    amari = a % b;
    if(amari == 0){
      break;
    }
    a = amari * 10;
    hai[i] = a / b;

  }
  printf("%d.",hai[0]);
  for(a = 1;a<i;a++){
    printf("%d",hai[a]);
  }
  printf("\n");

  return 0;

}
