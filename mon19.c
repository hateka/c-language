#include <stdio.h>
#include <ctype.h>

int main(void){

  char str[128];
  int i = 0;
  long x = 0;

  printf("16進数を入力:");
  scanf("%s",str);
  
  while(str[i] !='\0'){
    if(isxdigit(str[i])!=0){
	if(isdigit(str[i])!=0){
          x = x * 16+str[i] - '0';
        }else{
          str[i] = tolower(str[i]);
          x = x *16+str[i] -'a'+10;
        }
      }else{
	printf("10進数にはできません");
        return 0;
      }
      i++;
  }
    printf("10進数:%ld\n",x);

  return 0;

}
