#include <stdio.h>

int main(void){

  int i,n;
  for(n = 0;n<10;n++){
    for(i = 0;i<=n;i++){
      printf("%d",i);
    }
    printf("\n");
  }

  return 0;
}
