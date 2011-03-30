#include <stdio.h>

int main(void){


  float data1 = 100.0;
  float data2;
  int i = 1;
  while(i<=10){
    printf("浮動小数点数を入力");
    scanf("%f",&data2);
    if(data2 == 0.0){
      continue;
    }else{
      data1 = data1 / data2;
      printf("data1 = %f\n",data1);
    }
 
    if(data1 <= 1.0){
        break;
    }else{
      i++;
    }
  }
  return 0;
}
