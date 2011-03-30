#include <stdio.h>
#include <stdlib.h>

int main(void){

  int i,j,num;

  for(j=0;j<10;j++){
    num = rand() % 80;
     for(i=0;i<=num;i++){
       printf("*");
     }
       printf("\n");
  }

return 0;
}
