#include <stdio.h>

int main(void){

  int mono = 468;
  int man = 10000;
  
  int turi = 10000-468;
  
  printf("五千円の枚数=%d\n",turi / 5000);
  printf("千円の枚数=%d\n",turi / 1000);
  printf("500円の枚数=%d\n",turi / 500);
  printf("100円の枚数=%d\n",turi / 100);
  printf("50円の枚数=%d\n",turi / 50);
  printf("10円の枚数=%d\n",turi / 10);
  printf("5円の枚数=%d\n",turi / 5);
  printf("1円の枚数=%d\n",turi / 1);
  return 0;
}
