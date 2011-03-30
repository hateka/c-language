#include <stdio.h>

int main(void){

  int i;
  int j;

  for(i = 0;i<10;i++){
    for(j = 0;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
return 0;
}
