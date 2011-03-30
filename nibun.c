#include <stdio.h>

#define suji(10);

int main(void)
{

  int list[suji] = {3,6,7,8,9,12,17,19,20,24};
  int num = 0;
  int hi = suji-1;
  int midd;

  while(1){
    midd = (num+hi)/2;
    if(list[midd] == 17){
      puts("ari!");
      break;
    }else if(list[midd] < 17){
      num = midd + 1;
    }else{
      hi = midd -1;
    }

  }

  printf("%d\n",list[midd]);


  return 0;
}
