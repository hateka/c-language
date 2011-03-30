#include <stdio.h>


int convert(void);

int main(void)
{

  int num;

  num = convert();

  printf("%d",num);
  printf("\n");
  
  return 0;

}

int convert(void)
{
  
  int num;

  printf("2乗する");

  scanf("%d",&num);

  return  num * num;

}
