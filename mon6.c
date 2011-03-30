#include <stdio.h>

int main(void){

  int data1 = 1000;
  int data2;
  do{
    printf("整数値を入力");
    scanf("%d",&data2);
    data1 = data1 - data2;
    printf("data1=%d\n",data1);

  }while(data1>0);

  return 0;

}
