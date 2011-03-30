#include <stdio.h>

int main(void){

  char a[81];
  char b[81];

  printf("同じ長さの文字列を２つ入れて\n");
  scanf("%s",a);
  scanf("%s",b);
  
  int i = 0;
  int flag = 0;

  while(a[i]!='\0'){
    if(a[i] != b[i]){
      flag+=1;
    }
    i++;
  }

  if(flag != 0){
    printf("異なる文字を入力した\n");
  }else{
    printf("同じ文字を入力した\n");
  }
 
  return 0;
}
