#include <stdio.h>

int main(void){
  int wa = 0;
  int data;
  printf("いれて\n");
  scanf("%d",&data);
  while(data!=0){
    wa=wa+data;
    printf("%d",wa);
    printf("いれて\n");
    scanf("%d",&data);
  }

  return 0;
}
