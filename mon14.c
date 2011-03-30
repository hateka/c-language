#include <stdio.h>

int main(void){

  int i;
  printf("1-3の整数値を入力");

  while(scanf("%d",&i) !=EOF){
    switch(i){
    case 1:
      printf("apple\n");
      break;
    case 2:
      printf("banana\n");
      break;
    case 3:
      printf("cherry\n");
      break;
    default:
      printf("???\n");
      break;
    }
  }

  printf("おしまい");

  return 0;

}
