#include <stdio.h>

int main(void){

  int n = 0;
  for(n;n<10;n++){
    int i = 0;
    for(i;i<=n;i++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
