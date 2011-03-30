#include <stdio.h>

int main(void){

  char how;
  int a,b,c;

  printf("計算方法の入力(+ - * /)");
  scanf("%c",&how);
  printf("%c\n",how);

  printf("整数値１の入力");
  scanf("%d",&a);
  printf("%d\n",a);

  printf("整数値２の入力");
  scanf("%d",&b);
  printf("%d\n",b);
  
  switch(how){

  case '+':
    c = a+b;
    printf("%d\n",c);
    break;
  case '-':
    c = a - b;
    printf("%d\n",c);
    break;
  case '*':
    c = a * b;
    printf("%d\n",c);
    break;
  case '/':
    if(b !=0 ){
      c = a / b;
      printf("%d\n",c);
    }else{
      printf("0ではわれない");
    }
    break;
  default:
    printf("入力エラーです");
    break;
  }

  return 0;

}
