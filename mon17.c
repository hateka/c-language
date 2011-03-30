#include <stdio.h>
#include <ctype.h>

int main(void){

  int i;
  for(i=0;i<127;i++){
    if(isprint(i)!=0){
      if(isalnum(i)){
        printf("%c",i);
      }else{
        printf("[%c]",i);
      }
    }
  }

  return 0;
}
