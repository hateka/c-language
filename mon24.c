#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  char str[128];
  int ten,i;
  int ninzuu[11]={0};

  puts("点数をいれてください");
  while(1){
    gets(str);
    if(str[0] == 'e' || str[0]== 'E'){
      break;
    }
    ten = atoi(str);

    if(ten>=0 && ten<=100){
      ninzuu[ten/10]++;
    }
  }

  for(i=0;i<10;i++){
    printf("%3d〜%2d点は%3d人\n",i*10,i*10+9,ninzuu[i]);
  }
  printf("100点は    %3d人\n",ninzuu[10]);
}
