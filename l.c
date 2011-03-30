#include <stdio.h>

int main(void)
{

  int num;

  num = 17;

  for(num;num<101;num++){
    if((num % 17) == 0)
    printf("%d\n",num);
  }

  return 0;
}
