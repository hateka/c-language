#include <stdio.h>

int main(void){

  int a = 611, *ptr;
  ptr = &a;

  printf("変数aのアドレス=%p\n",&a);
  printf("変数aの値=%d\n",a);

  printf("ポインタptrの値=%p\n",ptr);
  printf("ポインタptrの指す値=%d\n",ptr);

  return 0;

}
